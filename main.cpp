#include "tools.h"
#include "draw.h"
using namespace std;
    void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
int main()
{
  ShowConsoleCursor(false);
    easy_T commond_a;
    dra sks;
    system("title laikrodis");
   while(true){
     sks.show();
    sks.laikaso();
    sks.minso();
    sks.sek_t();
    sks.last_info();
    sks.day_night();
    sks.gotoxy(0,24);
   }
    return 0;
}
