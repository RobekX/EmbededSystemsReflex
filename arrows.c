#include "arrows.h"
#include <stdlib.h>
<<<<<<< Updated upstream
#include <time.h>
#include "key.h"
#include "../pre_emptive_os/api/osapi.h"

void reflex()
{
	srand(time(NULL));
	int arrowNr;
	tU8 key = KEY_NOTHING;
	tu8 keyList [] = {KEY_NOTHING, KEY_UP, KEY_RIGHT, KEY_DOWN, KEY_LEFT, KEY_CENTER};
	
	do
	{
		lcdColor(0,0);
		lcdClrscr();
		
		arrowNr=rand()%4 + 1;
		switch(arrowNr)
=======
#include "key.h"
#include "../pre_emptive_os/api/osapi.h"
#include "../pre_emptive_os/api/general.h"

extern tU32 ms;

void reflex()
{
	srand(ms);
	tU8 arrowToShow;
	tU8 key = KEY_NOTHING;
	tU8 keyList [] = {KEY_NOTHING, KEY_UP, KEY_RIGHT, KEY_DOWN, KEY_LEFT, KEY_CENTER};
	do
	{
		key = KEY_NOTHING;
		lcdColor(0,0);
		lcdClrscr();
		
		arrowToShow = rand()%4 + 1;
		switch(arrowToShow)
>>>>>>> Stashed changes
		{
			case 1:
				lcdIcon(36, 4, 57, 102, _arrow_up_57x102[2], _arrow_up_57x102[3], &_arrow_up_57x102[4]);
				break;
			case 2:
				lcdIcon(14, 26, 102, 57, _arrow_right_102x57[2], _arrow_right_102x57[3], &_arrow_right_102x57[4]);
				break;
			case 3:
				lcdIcon(36, 4, 57, 102, _arrow_down_57x102[2], _arrow_down_57x102[3], &_arrow_down_57x102[4]);
				break;
			case 4:
				lcdIcon(14, 26, 102, 57, _arrow_left_102x57[2], _arrow_left_102x57[3], &_arrow_left_102x57[4]);
				break;
			default:
				break;
		}
<<<<<<< Updated upstream
		key=checkKey(); 
		lcdGotoxy(20,115);
		lcdColor(0x00,0xfd);
		if (key == keyList[arrowNr])
		{
			lcdPuts("AWESOME!");
			osSleep(10);
=======
		//wlacz timer
		while(key == KEY_NOTHING)
		{
			key = checkKey(); 
		}
		//wylacz timer
		lcdGotoxy(20,115);
		lcdColor(0x00,0xfd);
		if (key == keyList[arrowToShow])
		{
			lcdPuts("AWESOME!"); // wyswietl czas
			osSleep(100);
>>>>>>> Stashed changes
		}
		else if (key != KEY_CENTER)
		{
			lcdPuts("TRY AGAIN");
<<<<<<< Updated upstream
			osSleep(10);
		}
	} while (key != KEY_CENTER)
=======
			osSleep(100);
		}
	} while (key != KEY_CENTER);
>>>>>>> Stashed changes
}