#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//diziyi tersten yazdirma

int main() {
	int n;
	int array_length;
	printf("\nDizinin uzunlugunu giriniz :\n");
	scanf("%d",&array_length);
	n=array_length;
	int array1[n];
	int i=0;
	while(n>0){
		printf("%d.elemani giriniz:\n",i+1);
		scanf("%d",&array1[i]);
		i++;
		n--;
	}
	printf("\n ters sirada dizi :\n");
	for(i=array_length-1;i>=0;i--){
		printf("%d",&array1[i]);
		return 0 ;
	}
}
