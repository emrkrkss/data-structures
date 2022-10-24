#include<stdio.h>
int main(void){
	int x=10;
	int *p = &x;
	x=x+1;
	(*p)++;
	
	printf("deðer %d", x) ;
	return 0;
	
	
	
	
	
}
