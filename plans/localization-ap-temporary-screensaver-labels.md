# Localization: AP mode and screensaver metadata labels

## Scope

Update `lbl_ap_improv_mode` in all 37 display locale files under
`src/locale/display/`, and `lbl_screensaver_text` in all 50 WebUI locale files
under `src/locale/www/`. Use the requested English wording in each `en_US.json`
and translate each meaning into the other locales of its set.

## Requested English wording

- `lbl_ap_improv_mode`: `AP/Temporary Mode`
- `lbl_screensaver_text`: `Show metadata on screensaver`

## Verification

Parse all 87 locale JSON files, verify the relevant key in each, run
`python src/locale/make_dsplocale.py --verify` and
`python src/locale/make_wwwlocale.py --verify`, and inspect the focused diff.
Existing unrelated working-tree changes must be preserved.

## Status

Implemented. The display generator validates all 37 display locales, the WebUI
generator validates all 50 WebUI locales, all 87 JSON files parse, English
values match the requested wording, and the focused diffs contain one requested
key change per display locale and one requested key change per WebUI locale.
