/*
 * Copyright © 2016 Windowless-Executable Ltd
 * This work is free. You can redistribute it and/or modify it under the
 * terms of the Do What The Fuck You Want To Public License, Version 2,
 * as published by Sam Hocevar. See the LICENSE file or http://www.wtfpl.net/ 
 * for more details.
 */

#include <windows.h>
#include <limits.h>

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow) {
	while (1) {
		Sleep(UINT_MAX); // huh? loop? nah, I'll do that tomorrow
	}

	return 255; // we shouldn't be here, why are we here?
	            // clearly a failure state, so indicate failure
}

/*
 * Do not use Windowless-Executable without contacting your IT department. Side
 * effects of Windowless-Executable include, but are not limited to: memory loss,
 * CPU slowdown, acute stress, and shitty C code. If you experience more than
 * 10.0 MB of memory loss when using Windowless-Executable, please contact your
 * local Geek Squad, as this could be a sign of a life-threatening illness.
 * Thank you for choosing Windowless-Executable.
 */
