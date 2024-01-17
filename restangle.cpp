#include <iostream>
#include<graphics.h>
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>

int main() {
	int gdrive =DETECT , gmode,error_code;
	int x1,y1,x2,y2;
	initgraph(&gdrive,&gmode,"");
	error_code =graphresult();
	if(error_code!=gOK){
		printf("Grafik hatasi: %s\n", grapherrormsg(error_code));
		printf("Durdurmak için herhangi bir tusa basin");
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
