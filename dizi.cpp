#include <iostream>
#include <stdio.h>
#include <conio.h>

int i,a[10];

main() {
printf("Dizi elemanlarýný girniz: \n");
for(i=0;i<=9;i++){
	printf("dizi[%d]:",i);
	scanf("%d",&a[i]);
}
printf("Girilen dizi elemanlarý:\n");
for(;i--;)
printf("dizi[%d]:%d\t",i,a[i]);
getch();

	
}
