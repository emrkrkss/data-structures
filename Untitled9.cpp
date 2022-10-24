#include<stdio.h>
//sınavda cıkar 
int main(void){
	int x=10;
	int *p1=&x; //isaretçi p1 
	int **p2 = &p1; //işaretçi gösteren isaretci
	printf("x = %d\n", x);
	printf("&x = %d\n", &x); //x adresi
	printf("p1 = %d\n", p1); //p1 içerisindekini yani x in adresini verir
	printf("*p1 = %d\n", *p1); //.... adresindeki veriyi verir. yani X in değeri verdi. 
	printf("&p1 = %d\n", &p1); 
	printf("p2 = %d\n", p2); //p1 Adresini verir. 
	printf("*p2 = %d\n", *p2); //X'in adresini verir.
	printf("**p2 = %d\n", **p2); //X in  değerini verdi
	printf("X=%d\n", *(&x)); //X değerini verdi. 
	
	
	
	
	
	
	
	
	
}
