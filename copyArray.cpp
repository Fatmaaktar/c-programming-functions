#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//bir dizinin elemanlarini baþka bir diziye kopyalama

int main() {
int n;
int array_length;
printf("\n Dizi uzunlugunu giriniz:\n");
scanf("%d", &array_length);
n=array_length;
int array1[n];
int copy_array[n];
int i=0;
while(n>0){
	printf("%d.elemani giriniz:\n",i+1);
	scanf("%d",&array1[i]);
	i++;
	n--;
}
int total=0;
for(i=0;i<array_length;i++){
	copy_array[i]=array1[i];
}
printf("\n kopya dizi içerigi\n");
for(i=0;i<array_length;i++){
	printf("%d",copy_array[i]);
}
printf("\n");
return(0);
}
