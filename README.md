# FPS Unlocker — cloud build starter

This repository is configured to attempt an Android64 Geode build using GitHub Actions.
It does not include a prebuilt `.geode` file.

## Build it from a phone
1. Create a new GitHub repository.
2. Upload all files in this project (including the hidden `.github` folder).
3. Open the repository's **Actions** tab and enable Actions if asked.
4. Run **Build Android Geode mod** using **Run workflow**, or push a commit to `main`.
5. Open the completed workflow run and download the `FPS-Unlocker-Android64` artifact.
6. Extract the ZIP and install the `.geode` file through Geode's supported mod installation method.

## Limitations
- This is experimental source code, not a verified working FPS unlocker.
- A successful build only proves it compiled; it does not prove it changes the Android frame cap.
- The setting requests an animation interval. Android's display scheduler, GD's timing and Geode bindings may ignore or clamp it.
- A 120 Hz display cannot physically refresh more than 120 times per second.
- The Android GD version is set to `*` to avoid assuming an exact patch version. Compatibility is not guaranteed.
- If the build fails, inspect the workflow logs; source may need adapting to the exact SDK bindings.
