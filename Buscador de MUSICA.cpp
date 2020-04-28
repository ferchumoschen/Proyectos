#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <iostream>

using namespace std;

void cuadro();
void musica();
void gotoxy(int x, int y) {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
  cuadro();
  cout << "\n\n";
  musica();
  return 0;
}
void cuadro(){
  int x=0;
  for(x=1;x<=40;x++)
  {
    gotoxy(x,1);printf(".");
    gotoxy(4,3);printf("      PROGRAMA PARA MUSICA     ");
    gotoxy(x,4);printf(".");
    if(x<=4)
    {
      gotoxy(1,x);printf(".");
      gotoxy(40,x);printf(".");
    }
  }
  getch();
  }

void musica(){


    int m;
    cout << " INGRESE 1 SI DESEA ABRIR YOUTUBE " << endl;
    cout << " INGRESE 2 SI DESEA ABRIR SPOTIFY " << endl;
    cout << " INGRESE 3 SI DESEA DESCARGAR UNA CARPETA CON MUSICA " << endl;
    cin >> m;
    if(m==1){
        system("start www.youtube.com");
    }
     if(m==2){
        system("start www.spotify.com");
     }
    if(m==3){
        system("start www.mediafire.com/folder/lai7eye3x6o1n/Musica");
    }
}
