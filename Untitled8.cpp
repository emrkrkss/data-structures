#include<stdio.h>
int main(void){
	int x=10;
	char y = 'A';
	int *p1 = &x;
	char *p2 = &y;
	void *p3 = &y; //Genel i�aret�i AVANTAJ: her t�r verinin adresini tutabilir.
	printf("x = %d\n", *p1);
	printf("Y'nin degeri = %c\n", *p2); //Y'nin de�erini g�sterir.
	//printf("X in de�eri = %d\n", *p3); // DEZAVANTAJ: Elde edilen de�erin t�r� belli de�il. 
	printf("X'in degeri = %c\n", *(char*)p3);//10. sat�rdaki hatan�n ��z�z�m�d�r. T�r� d�n��t�rmemiz gerekir. 
	return 0;
	
	
	
	
	
}
