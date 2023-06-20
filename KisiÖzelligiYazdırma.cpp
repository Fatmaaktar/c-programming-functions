#include <iostream>
#include <stdio.h>

int main() {
int i;
char name [][15]={"Ahmet","Mehmet","Can"};
int kilo[]={70,60,52};
int age[]={20,30,42};
float size[]={1.70,1.85,1.45};
puts("\nName\tKilo\tSize\tAge");
for(i=0;i<3;i++){
	printf("%s\t%d\t%4.2f\t%d\n",
	 name[i], kilo[i], size[i], age[i]);
}
}
