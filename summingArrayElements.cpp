#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
// dizi elemanlarini toplayan program
int n;
int array_length;
printf("\n dizi uzunlugu giriniz:\n");
scanf("%d",&array_length);
n=array_length;
int array1[n];
int i=0;
while(n>0){
	printf("%d elemani giriniz:\n",i+1);
	scanf("%d",&array1[i]);
	i++;
	n--;
}
int total=0;
for(i=0;i<array_length;i++){
	total=total+array1[i];
}
printf("\n dizideki elemanlarin toplami: %d\n",total);
return(0);

}
