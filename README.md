# Task-Scheduler

My very own Task Scheduler.

This is designed to be tiny and lightweight so no development towards adding external libraries for functionality is in sight.

---

## Usage

- Make sure you have a way of compiling C++ code.

- Open up the project with VS Studio or the main.cpp in your favorite code editor.

- Create as mny CommandBlock objects as you need:
- 	- Supply the command you want to run,
- 	- Supply the delay for the command.

- Compile the program to get an executeable.

Now you have a little package that does whatever you put in it. You can put it inside /usr/bin(Linux) or StartMenu(Windows) and run it whenever.

---

## Examples from my own workflow

Downloading a movie and a game at the same time? Kill Steam and setup the program to run Steam when the movie download ends. Or even better chain it up with killing Steam and running Spotify when Steam download ends. You can sleep while the PC works for you!

Spofity doesn't always shut off immediately when you tell it to exit. No program can ignore kill command however, so you can enforce kill signals with this program.

Logitech Software applies macros to connected devices. But when devices disconnect and then reconnect sometimes it doesn't re-apply the macros. Another use-case is killing the Logitech Software and running it again.

---

## MIGHT DOs

- Have a GUI

- Have threads for concurency
