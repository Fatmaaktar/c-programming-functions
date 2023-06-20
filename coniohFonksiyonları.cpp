#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>

char isim[10];
int x=1;
int y=5;

main(){
system("cls");
window(5,3,40,10);
textbackground(2);
system("cls");
gotoxy(5,3);
textcolor(4);
lowvideo();
cprintf("Adinizi giriniz :");
normvideo();
textbackground(2);
cscanf("%s",isim);
window(45,3,75,10);
textbackground(1);
system("cls");
textcolor(15);
do{
	gotoxy(x,y);
	delline();
	cprintf("%s",isim);
	x++;
	if(x>=30)
	x=1;
	delay(50);
}while(!kbhit());
getch();
window(20,12,60,18);
textbacground(6);
system("cls");
textcolor(4);
highvideo();
gotoxy(10,3);
cprintf("iyi gunler");
getch();
window(1,1,80,25);
textbackground(0);
system("cls");
getch();

}
