#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//bir dizinin elemanlarýný baþka bir diziye kopyalama

int main() {
int n;
int dizi_uzunlugu;
printf("\n Dizi uzunlugunu giriniz:\n");
scanf("%d", &dizi_uzunlugu);
n=dizi_uzunlugu;
int dizi[n];
int kopya_dizi[n];
int i=0;
while(n>0){
	printf("%d.elemani giriniz:\n",i+1);
	scanf("%d",&dizi[i]);
	i++;
	n--;
}
int toplam=0;
for(i=0;i<dizi_uzunlugu;i++){
	kopya_dizi[i]=dizi[i];
}
printf("\n kopya dizi içerigi\n");
for(i=0;i<dizi_uzunlugu;i++){
	printf("%d",kopya_dizi[i]);
}
printf("\n");
return(0);
}
