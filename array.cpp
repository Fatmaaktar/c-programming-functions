#include <iostream>
#include <stdio.h>
#include <conio.h>

int i,a[10];

main() {
printf("Dizi elemanlarini girniz: \n");
for(i=0;i<=9;i++){
	printf("array1[%d]:",i);
	scanf("%d",&a[i]);
}
printf("Girilen dizi elemanlari:\n");
for(;i--;)
printf("array1[%d]:%d\t",i,a[i]);
getch();

	
}
