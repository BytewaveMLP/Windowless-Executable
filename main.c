#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow) {
	while (1) {
		Sleep(24 * 60 * 60 * 1000); // huh? loop? nah, I'll do that tomorrow
	}

	return 255; // we shouldn't be here, why are we here?
	            // clearly a failure state, so indicate failure
}