# Arduino blink 💡

A "hello world" example for Arduino Mega 2560 Board

## Prerequisites 📚

- Arduino Mega 2560 Board [[1]] and a USB 2.0 Type-A-to-Type-B [[2]]
  cable;
- Linux OS with Python3 and `python3-venv` package installed (known to
  work on Ubuntu 22.04 with Python 3.10.4 + `python3-venv`);
- Visual Studio Code installed and ready (known to work with v1.70.0).

[1]: https://docs.arduino.cc/hardware/mega-2560
[2]: https://static.bhphoto.com/images/images1000x1000/1440437729_1042567.jpg

## Setup 🛠

1. Add the user you work as to the `dialout` group. Otherwise this error
   will pop-up when trying to upload compiled code to the Arduino board:

   ```
   Could not open port /dev/ttyACM0: [Errno 13] Permission denied: '/dev/ttyACM0'
   ```

2. Start VS Code. The IDE will prompt you to install the `PlatformIO IDE`
   plugin - please do so. (If not, go to plugins, search for `PlatformIO`
   and install it `PlatformIO IDE` plugin.) After the installation succeeds
   restart VS Code (do NOT just reload the window - doesn't seem to be
   enough).

3. Clone the repository and open it as a directory in VSCode. Now open
   `src/main.cpp` and take a look at the source code there.

## Build 🏗

   Try to build the project binary using the "✓" button on the status line,
   bottom of the VS Code window.
   
   A successful build would end with something like

   ```
   ======= [SUCCESS] Took 0.71 seconds =======
   ```

## Run 🚀

If building succeeds, make sure the board is plugged in via the
Type-A-to-Type-B USB cable and then upload the code to the board using the
"→" button down on the status line. (The first time you do this a bunch of
libraried are going to be downloaded, which may take some time.)

The Arduino should now blink fast for short with couple service LEDs to
indicate an upload has been performed, then start executing the code from
`src/main.cpp`, which is blinking with the default LED following the timing
pattern given in that code.

That's it! ;)

Enjoy!

## Resources 📖

- https://www.youtube.com/watch?v=JmvMvIphMnY
- https://www.youtube.com/watch?v=QMYhVqjBhKQ
- https://stackoverflow.com/questions/27858041
