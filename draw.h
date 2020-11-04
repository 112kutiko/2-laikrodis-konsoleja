#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED
class dra: public easy_T
{

public:
    void min_ss()
    {
        for(int f_1=17; f_1!=31; f_1++)
        {
            gotoxy(f_1,3);
            SetConsoleTextAttribute(hConsole,102);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            gotoxy(f_1,19);
            SetConsoleTextAttribute(hConsole,102);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
        }
        for(int f_1=3; f_1!=20; f_1++)
        {
            gotoxy(17,f_1);
            SetConsoleTextAttribute(hConsole,102);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            gotoxy(31,f_1);
            SetConsoleTextAttribute(hConsole,102);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
        }
    }
    void minso()
    {
        getLaikasSO();
        switch(m)
        {
        case 1:
            min_ss();
            gotoxy(25,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 2:
            min_ss();
            gotoxy(26,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 3:
            min_ss();
            gotoxy(27,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 4:
            min_ss();
            gotoxy(28,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 5:
            min_ss();
            gotoxy(29,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 6:
            min_ss();
            gotoxy(30,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 7:
            min_ss();
            gotoxy(31,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 8:
            min_ss();
            gotoxy(31,4);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 9:
            min_ss();
            gotoxy(31,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 10:
            min_ss();
            gotoxy(31,6);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 11:
            min_ss();
            gotoxy(31,7);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 12:
            min_ss();
            gotoxy(31,8);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 13:
            min_ss();
            gotoxy(31,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 14:
            min_ss();
            gotoxy(31,10);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 15:
            min_ss();
            gotoxy(31,11);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 16:
            min_ss();
            gotoxy(31,12);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 17:
            min_ss();
            gotoxy(31,13);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 18:
            min_ss();
            gotoxy(31,14);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 19:
            min_ss();
            gotoxy(31,15);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 20:
            min_ss();
            gotoxy(31,16);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 21:
            min_ss();
            gotoxy(31,17);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 22:
            min_ss();
            gotoxy(31,18);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 23:
            min_ss();
            gotoxy(31,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 24:
            min_ss();
            gotoxy(30,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 25:
            min_ss();
            gotoxy(29,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 26:
            min_ss();
            gotoxy(28,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 27:
            min_ss();
            gotoxy(27,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 28:
            min_ss();
            gotoxy(26,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 29:
            min_ss();
            gotoxy(25,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 30:
            min_ss();
            gotoxy(24,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 31:
            min_ss();
            gotoxy(23,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 32:
            min_ss();
            gotoxy(22,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 33:
            min_ss();
            gotoxy(21,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 34:
            min_ss();
            gotoxy(20,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 35:
            min_ss();
            gotoxy(19,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 36:
            min_ss();
            gotoxy(18,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 37:
            min_ss();
            gotoxy(17,19);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 38:
            min_ss();
            gotoxy(17,18);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 39:
            min_ss();
            gotoxy(17,17);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 40:
            min_ss();
            gotoxy(17,16);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 41:
            min_ss();
            gotoxy(17,15);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 42:
            min_ss();
            gotoxy(17,14);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 43:
            min_ss();
            gotoxy(17,13);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 44:
            min_ss();
            gotoxy(17,12);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 45:
            min_ss();
            gotoxy(17,11);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 46:
            min_ss();
            gotoxy(17,10);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 47:
            min_ss();
            gotoxy(17,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 48:
            min_ss();
            gotoxy(17,8);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 49:
            min_ss();
            gotoxy(17,7);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 50:
            min_ss();
            gotoxy(17,6);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 51:
            min_ss();
            gotoxy(17,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 52:
            min_ss();
            gotoxy(17,4);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 53:
            min_ss();
            gotoxy(17,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 54:
            min_ss();
            gotoxy(18,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 55:
            min_ss();
            gotoxy(19,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 56:
            min_ss();
            gotoxy(20,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 57:
            min_ss();
            gotoxy(21,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 58:
            min_ss();
            gotoxy(22,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 59:
            min_ss();
            gotoxy(23,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
         case 60:
            min_ss();
            gotoxy(24,3);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        }
    }
    void show()
    {
        for(int f_1=0; f_1<8; f_1++)
        {
            gotoxy(20+f_1,5);
            SetConsoleTextAttribute(hConsole,255);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            gotoxy(20+f_1,9);
            SetConsoleTextAttribute(hConsole,255);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
        }
        for(int f_1=0; f_1<5; f_1++)
        {
            gotoxy(20,5+f_1);
            SetConsoleTextAttribute(hConsole,255);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            gotoxy(28,5+f_1);
            SetConsoleTextAttribute(hConsole,255);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
        }

        min_ss();
        sibs();

    }
    void laikaso()
    {
        getLaikasSO();
        switch(h)
        {
        case 24:
            show();
            gotoxy(24,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 0:
            show();
            gotoxy(24,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 1:
            show();
            gotoxy(23,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 2:
            show();
            gotoxy(22,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 3:
            show();
            gotoxy(21,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 4:
            show();
            gotoxy(20,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 5:
            show();
            gotoxy(20,8);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 6:
            show();
            gotoxy(20,7);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 7:
            show();
            gotoxy(20,6);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 8:
            show();
            gotoxy(20,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 9:
            show();
            gotoxy(21,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 10:
            show();
            gotoxy(22,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 11:
            show();
            gotoxy(23,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 12:
            show();
            gotoxy(24,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 13:
            show();
            gotoxy(25,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 14:
            show();
            gotoxy(26,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 15:
            show();
            gotoxy(27,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 16:
            show();
            gotoxy(28,5);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 17:
            show();
            gotoxy(28,6);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 18:
            show();
            gotoxy(28,7);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 19:
            show();
            gotoxy(28,8);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 20:
            show();
            gotoxy(28,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 21:
            show();
            gotoxy(27,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 22:
            show();
            gotoxy(26,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        case 23:
            show();
            gotoxy(25,9);
            SetConsoleTextAttribute(hConsole,204);
            cout<<".";
            SetConsoleTextAttribute(hConsole,15);
            break;
        }

    }
     void sibs()
    {
        for(int f_1=18; f_1!=31; f_1++)
        {
            gotoxy(f_1,4);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
            gotoxy(f_1,18);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
        }
         for(int f_1=4; f_1!=19; f_1++)
        {
            gotoxy(18,f_1);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
        }
            gotoxy(30,17);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
            gotoxy(26,15);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
            gotoxy(26,14);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
  for(int f_1=26; f_1!=31; f_1++)
        {
            gotoxy(f_1,13);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
            gotoxy(f_1,16);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
        }
  for(int f_1=4; f_1!=13; f_1++)
        {
            gotoxy(30,f_1);
            SetConsoleTextAttribute(hConsole,119);
            cout<<".";
            SetConsoleTextAttribute(hConsole,204);
        }


    }
    void sek_t(){
    getLaikasSO();
    switch(mm){
     case 1:
        sibs();
        gotoxy(18,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 2:
        sibs();
        gotoxy(19,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 3:
        sibs();
        gotoxy(20,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 4:
        sibs();
        gotoxy(21,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 5:
        sibs();
        gotoxy(22,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 6:
        sibs();
        gotoxy(23,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 7:
        sibs();
        gotoxy(24,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 8:
        sibs();
        gotoxy(25,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 9:
        sibs();
        gotoxy(26,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 10:
        sibs();
        gotoxy(27,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
     case 11:
        sibs();
        gotoxy(28,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 12:
        sibs();
        gotoxy(29,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 13:
        sibs();
        gotoxy(30,4);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 14:
        sibs();
        gotoxy(30,5);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 15:
        sibs();
        gotoxy(30,6);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 16:
        sibs();
        gotoxy(30,7);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 17:
        sibs();
        gotoxy(30,8);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 18:
        sibs();
        gotoxy(30,9);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 19:
        sibs();
        gotoxy(30,10);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 20:
        sibs();
        gotoxy(30,11);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 21:
        sibs();
        gotoxy(30,12);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 22:
        sibs();
        gotoxy(30,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 23:
        sibs();
        gotoxy(29,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 24:
        sibs();
        gotoxy(28,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 25:
        sibs();
        gotoxy(27,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 26:
        sibs();
        gotoxy(26,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 27:
        sibs();
        gotoxy(26,14);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 28:
        sibs();
        gotoxy(26,15);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 29:
        sibs();
        gotoxy(26,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 30:
        sibs();
        gotoxy(27,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 31:
        sibs();
        gotoxy(28,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 32:
        sibs();
        gotoxy(29,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 33:
        sibs();
        gotoxy(30,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 34:
        sibs();
        gotoxy(30,17);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 35:
        sibs();
        gotoxy(30,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 36:
        sibs();
        gotoxy(29,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 37:
        sibs();
        gotoxy(28,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 38:
        sibs();
        gotoxy(27,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 39:
        sibs();
        gotoxy(26,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 40:
        sibs();
        gotoxy(25,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 41:
        sibs();
        gotoxy(24,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 42:
        sibs();
        gotoxy(23,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 43:
        sibs();
        gotoxy(22,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 44:
        sibs();
        gotoxy(21,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 45:
        sibs();
        gotoxy(20,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 46:
        sibs();
        gotoxy(19,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 47:
        sibs();
        gotoxy(18,18);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 48:
        sibs();
        gotoxy(18,17);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 49:
        sibs();
        gotoxy(18,16);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 50:
        sibs();
        gotoxy(18,15);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 51:
        sibs();
        gotoxy(18,14);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 52:
        sibs();
        gotoxy(18,13);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 53:
        sibs();
        gotoxy(18,12);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 54:
        sibs();
        gotoxy(18,11);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 55:
        sibs();
        gotoxy(18,10);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 56:
        sibs();
        gotoxy(18,9);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 57:
        sibs();
        gotoxy(18,8);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 58:
        sibs();
        gotoxy(18,7);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 59:
        sibs();
        gotoxy(18,6);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
      case 60:
        sibs();
        gotoxy(18,5);
        SetConsoleTextAttribute(hConsole,204);
        cout<<".";
        SetConsoleTextAttribute(hConsole,15);
        break;
    }
    }
    void last_info(){
    gotoxy(22, 7);
    getLaikasSO();
    cout<<"H: "<<h;
    gotoxy(20, 14);
    cout<<"M: "<<m;
    gotoxy(20, 16);
    cout<<"S: "<<mm;
    }
    void day_night(){
        for(int op=20;op!=29;op++){
                 gotoxy(op, 11);
                 if(h<20&&h>8){
                    SetConsoleTextAttribute(hConsole,238);
                    cout<<".";
                    SetConsoleTextAttribute(hConsole,15);
                 }else{
                     SetConsoleTextAttribute(hConsole,153);
                    cout<<".";
                    SetConsoleTextAttribute(hConsole,15);

                 }
        }


    }
    void gotoxy(int xa, int ya)
    {
        static HANDLE h = NULL;
        if(!h)
            h = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c = { xa, ya };
        SetConsoleCursorPosition(h,c);
    }



};


#endif // DRAW_H_INCLUDED
