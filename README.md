![Logo](img/logo.png)

# Windowless-Executable

[Steam Group](http://steamcommunity.com/groups/Windowless-Executable)

## (TL;DR) For the lazy

The latest release (v1.1.1.0) may be found [here](/releases/latest).

## Description

A Win32 executable that does nothing. No windows, no operations, nothing. Just perpetually sleeps.

## Uses
- Set your Steam status using a non-Steam game
- Hide the game you're currently playing by running Windowless-Executable with a blank name

## Features
- Minimalistic UX design
- Small resource footprint
- Small file
- Hand-programmed

## Usage

Just launch it. That's about it. You can run it through Steam if you want to set your Steam status (ie with a non-Steam game shortcut).

## Known issues
- Only compiles under Windows
- Requires Visual Studio
- May be blocked by SmartScreen (sorry, can't be arsed to get my code signed :^))

## Compiling

### Prerequisites (required for all options)

- Visual Studio
- A brain

### Using Visual Studio tools (the cool haxory way)

```
cl main.c /SUBSYSTEM
```

### Using our compile script (the braindead way)

```
compile (version)
```

or just

```
compile
```

Yep, it's that easy.

## License

[![WTFPL](http://www.wtfpl.net/wp-content/uploads/2012/12/wtfpl-badge-1.png)](http://www.wtfpl.net/)
