#include<stdio.h>
//sýnavda cýkar 
int main(void){
	int x=10;
	int *p1=&x; //isaretçi p1 
	int **p2 = &p1; //iþaretçi gösteren isaretci
	printf("X=%d\n", x);
	printf("X=%d\n", &x); //x adresi
	printf("X=%d\n", p1); //p1 içerisindekini yani x in adresini verir
	printf("X=%d\n", *p1); //.... adresindeki veriyi verir. yani X in deðeri verdi. 
	printf("X=%d\n", &p1); 
	printf("X=%d\n", p2); //p1 Adresini verir. 
	printf("X=%d\n", *p2); //X'in adresini verir.
	printf("X=%d\n", **p2); //X in  deðerini verdi
	printf("X=%d\n", *(&x)); //X deðerini verdi. 
	
	
	
	
	
	
	
	
	
}
