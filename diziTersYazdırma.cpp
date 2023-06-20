#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//diziyi tersten yazdýrma

int main() {
	int n;
	int dizi_uzunlugu;
	printf("\nDizinin uzunlugunu giriniz :\n");
	scanf("%d",&dizi_uzunlugu);
	n=dizi_uzunlugu;
	int dizi[n];
	int i=0;
	while(n>0){
		printf("%d.elemani giriniz:\n",i+1);
		scanf("%d",&dizi[i]);
		i++;
		n--;
	}
	printf("\n ters sirada dizi :\n");
	for(i=dizi_uzunlugu-1;i>=0;i--){
		printf("%d",&dizi[i]);
		return 0 ;
	}
}
