#include<stdio.h>
int main(void){
	int x=10;
	int *p = &x;
	x=x+1;
	(*p)++;
	
	printf("de�er %d", x) ;
	return 0;
	
	
	
	
	
}
