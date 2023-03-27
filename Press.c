#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

void main(int argc, char* argv[]) {
	//TODO: hide the console
	//TODO: better? Hanging to the taskbar
	while (1) {
		keybd_event(145, 0, 0, 0);
		keybd_event(145, 0, 2, 0);
		Sleep(3000);
		//Sleep(3 * 60 * 1000);

		keybd_event(145, 0, 0, 0);
		keybd_event(145, 0, 2, 0);
		Sleep(3000);
		//Sleep(3 * 60 * 1000);
	}
}