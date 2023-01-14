#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void showpacman(int x, int y);
void showGhost(int x, int y);
char getcharatxy(short int x,short int y);
main(){

  int gx = 1; 
  int gy = 1;
  string direction ="right";
  char previouschar=' ';
  system("cls");
  printMaze();
  gotoxy(gx, gy);
  while(true)
  {
    Sleep(100);
    if(direction == "right"){
      char nextlocation=getcharatxy(gx+1, gy);
      if(nextlocation=='%'){
        direction=="left";
      }
      else if(nextlocation==' '|| nextlocation=='.'){
        clear(gx,gy,previouschar);
        gx=gx+1;
        previouschar = nextlocation;
        showGhost(gx,gy);
     }

    }
    if (direction =="left"){
        char nextlocation=getcharatxy(gx-1, gy);
      if(nextlocation=='%'){
        direction=="right";
      }
      else if(nextlocation==' '|| nextlocation=='.'){
        clear(gx,gy,previouschar);
        gx=gx-1;
        previouschar = nextlocation;
        showGhost(gx,gy);
     }
    }


    
  }
}


void showGhost(int x, int y){
    gotoxy(x,y);
    cout << "G";
}
void clear(int x, int y, char previous){
    gotoxy(x,y);
    cout << previous;
}
char getcharatxy(short int x, short int y){
    CHAR_INFO ci;
    COORD xy={0, 0};
    SMALL_RECT rect={x,y, x, y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';

}



void printMaze()
{
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

