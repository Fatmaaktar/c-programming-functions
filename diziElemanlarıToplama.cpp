#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
// dizi elemanlarini toplayan program
int n;
int dizi_uzunlugu;
printf("\n dizi uzunlugu giriniz:\n");
scanf("%d",&dizi_uzunlugu);
n=dizi_uzunlugu;
int dizi[n];
int i=0;
while(n>0){
	printf("%d elemani giriniz:\n",i+1);
	scanf("%d",&dizi[i]);
	i++;
	n--;
}
int total=0;
for(i=0;i<dizi_uzunlugu;i++){
	total=total+dizi[i];
}
printf("\n dizideki elemanlarin toplami: %d\n",total);
return(0);

}
