/**
 * Copyright © 2016 Windowless-Executable Ltd
 * This work is free. You can redistribute it and/or modify it under the
 * terms of the Do What The Fuck You Want To Public License, Version 2,
 * as published by Sam Hocevar. See the COPYING file or http://www.wtfpl.net/ 
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
