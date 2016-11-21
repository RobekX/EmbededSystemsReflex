#include "arrows.h"
#include <stdlib.h>
#include <windows.h>
#include "key.h"
#include "../pre_emptive_os/api/osapi.h"
#include "../pre_emptive_os/api/general.h"

extern tU32 ms;

void reflex()
{
  srand(ms);
  tU32 time=0;
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
    {
      case 1: lcdIcon(36, 4, 57, 102, _arrow_up_57x102[2], _arrow_up_57x102[3], &_arrow_up_57x102[4]);
              
              break;
      case 2: lcdIcon(14, 26, 102, 57, _arrow_right_102x57[2], _arrow_right_102x57[3], &_arrow_right_102x57[4]);
              break;
      case 3: lcdIcon(36, 4, 57, 102, _arrow_down_57x102[2], _arrow_down_57x102[3], &_arrow_down_57x102[4]);
              break;
      case 4: lcdIcon(14, 26, 102, 57, _arrow_left_102x57[2], _arrow_left_102x57[3], &_arrow_left_102x57[4]);
              break;
      default: break;
    }
    time=ms;//wlacz timer
    while(key == KEY_NOTHING)
    {
      key = checkKey();
    }
    time=(ms-time)/1000;//wylacz timer
    lcdGotoxy(20,115);
    lcdColor(0x00,0xfd);
    if (key == keyList[arrowToShow])
    {
      lcdPuts("AWESOME! T:");
      lcdPuts(ms) // wyswietl czas
      osSleep(100);
    }
    else if (key != KEY_CENTER)
    {
      lcdPuts("TRY AGAIN");
      osSleep(100);
    }
  } while (key != KEY_CENTER);
}
