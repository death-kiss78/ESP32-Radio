# Startup ESPFileUpdater HTTP Timeout

## Status

Implemented and validated for the root `es3c28s` environment.

## Symptom and findings

- The manual WebUI check in `src/core/netserver.cpp::checkForOnlineUpdate()` uses a direct `HTTPClient`.
- The automatic startup check calls `ESPFileUpdater::checkAndUpdate()` through `Utility::updateFile()` in `src/core/startup.cpp`.
- PlatformIO currently resolves ESPFileUpdater 1.5.0. The installed source is under `.pio/libdeps`, which is generated and must not be the durable edit location.
- In ESPFileUpdater 1.5.0, `setTimeout()` configures `_timeout`, used only by the filesystem, system-time, and network readiness loops. Its HEAD, fallback GET, and download GET `HTTPClient` instances do not set HTTP timeouts.
- The installed Arduino HTTPClient defaults both connect and response timeouts to 5 seconds.

## Proposed implementation

1. Make ESPFileUpdater source project-managed so a clean PlatformIO dependency install cannot discard the fix; preserve its MIT license and attribution.
2. Add a distinct HTTP request-timeout setting, preserving the existing readiness-timeout behavior. Apply it to every HTTPClient request path in the library, including HEAD, hash-fallback GET, and download GET; configure both connection and response timeouts.
3. Configure a 20-second HTTP timeout on the updater created for `startupServicesAsync()`, which performs the automatic version check and other startup-service updates.
4. Update the root PlatformIO dependency configuration and `.github/code-summary.md` to document the local dependency and timeout behavior.
5. Build the root `es3c28s` environment; verify that the local library is selected and the timeout is applied. Do not edit `.pio` by hand.

## Implementation state

- Vendored the matching 1.5.0 dependency sources and MIT license under `lib/ESPFileUpdater`.
- Added `setHttpTimeout()` without changing `setTimeout()` readiness-wait semantics; all three library HTTP request paths apply both connect and response timeouts.
- Configured the updater passed to `startupServicesAsync()` for 20 seconds. First-boot required-file downloads and the manual WebUI check remain unchanged.
- Removed the registry dependency from the workspace's root `platformio.ini` so the local copy is selected. That root config is ignored by Git; the tracked vendored library and startup change are the persistent implementation.
- `pio run -e es3c28s` succeeded and compiled `ESPFileUpdater` from the local library. Final usage: 106,584 bytes RAM and 2,987,429 bytes flash.
- The build emitted an unrelated existing `-Wunused-function` warning in the AAC decoder's `neaacdec.h`.

## Scope decisions to confirm

- The proposal covers the root project and its inherited environments. Separate PlatformIO projects under `builds/` and `docs/` are not included unless they also need the same fix.
- The manual WebUI check and first-boot required-file download keep their current timeout behavior unless requested separately.
