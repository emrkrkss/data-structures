#include<stdio.h>
//s�navda c�kar 
int main(void){
	int x=10;
	int *p1=&x; //isaret�i p1 
	int **p2 = &p1; //i�aret�i g�steren isaretci
	printf("X=%d\n", x);
	printf("X=%d\n", &x); //x adresi
	printf("X=%d\n", p1); //p1 i�erisindekini yani x in adresini verir
	printf("X=%d\n", *p1); //.... adresindeki veriyi verir. yani X in de�eri verdi. 
	printf("X=%d\n", &p1); 
	printf("X=%d\n", p2); //p1 Adresini verir. 
	printf("X=%d\n", *p2); //X'in adresini verir.
	printf("X=%d\n", **p2); //X in  de�erini verdi
	printf("X=%d\n", *(&x)); //X de�erini verdi. 
	
	
	
	
	
	
	
	
	
}
