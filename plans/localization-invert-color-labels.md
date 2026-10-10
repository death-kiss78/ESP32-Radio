# Localization: invert color labels

## Scope

Update the WebUI labels `lbl_invert_screen` and `lbl_invert_title` in all 50
files under `src/locale/www/`. Keep the requested English copy in `en_US.json`
and translate both labels into each other locale instead of copying English.

## Implementation

- `lbl_invert_screen`: translate “Invert colors”.
- `lbl_invert_title`: translate “Invert Title Colors”.
- Change only these two JSON values per locale.

## Verification

- Parse all locale JSON files.
- Confirm all 50 files contain both keys and that the English values match the
  requested wording.
- Review the diff to ensure no unrelated locale content changed.

## Status

Implemented. All 50 locale JSON files parse, both labels are present in every
file, the English values match the requested copy, `make_wwwlocale.py --verify`
passes, and the diff contains only the two requested value changes per locale.
