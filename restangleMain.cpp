#include <iostream>
#include<graphics.h>
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>

int main() {
	int gsurucusu =DETECT , gmodu,hatakodu;
	int x1,y1,x2,y2;
	initgraph(&gsrucusu,&gmodu,"");
	hatakodu =graphresult();
	if(hatakodu!=grOK){
		printf("Grafik hatas�: %s\n", grapherrormsg(hatakodu));
		printf("Durdurmak i�in herhangi bir tu�a bas�n");
		getch();
		exit(1);
		
	}
	
	x1=getmaxx()/2-50;
	y1=getmaxy()/2-50;
	x2=getmaxx()/2+50;
	y2=getmaxy()/2+50;
	restangle(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
}
