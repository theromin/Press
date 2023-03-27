#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

void main() {
	while (1) {
		keybd_event(145, 0, 0, 0);
		keybd_event(145, 0, 2, 0);
		printf("key pressed\n");
		Sleep(3000);

		keybd_event(145, 0, 0, 0);
		keybd_event(145, 0, 2, 0);
		printf("key unpressed\n");
		Sleep(3000);
	}
}