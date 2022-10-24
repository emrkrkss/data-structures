#include<stdio.h>
int main(void){
	int x=10;
	char y = 'A';
	int *p1 = &x;
	char *p2 = &y;
	void *p3 = &y; //Genel iþaretçi AVANTAJ: her tür verinin adresini tutabilir.
	printf("x = %d\n", *p1);
	printf("Y'nin degeri = %c\n", *p2); //Y'nin deðerini gösterir.
	//printf("X in deðeri = %d\n", *p3); // DEZAVANTAJ: Elde edilen deðerin türü belli deðil. 
	printf("X'in degeri = %c\n", *(char*)p3);//10. satýrdaki hatanýn çözüzümüdür. Türü dönüþtürmemiz gerekir. 
	return 0;
	
	
	
	
	
}
