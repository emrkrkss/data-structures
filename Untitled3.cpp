#include<stdio.h>
int main(void){
	 
	int x= 10;
	char y='A';
	int *p1 = &x;
	char *p2 = &y;
	printf("Boyut = %d", sizeof(p1));
	return 0;
}

