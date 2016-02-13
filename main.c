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
