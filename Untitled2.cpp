#include<stdio.h>
//fonksiyonda pointer ile 2 iþlem birden yapmak
void toplacarp(int , int b, int *toplam, int *carpim);

int main(void){
	
	int sayi1 =5, sayi2 =6, x, y;
	toplacarp(sayi1, sayi2, &x, &y);
	printf("x= %d, y=%d\n", x,y);
	return 0;
}
void toplacarp(int a, int b, int *toplam, int *carpim)
{
	*toplam=a+b;
	*carpim=a*b;
}
