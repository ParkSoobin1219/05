#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	
	printf("enter the calculation : ");
	scanf("%d%c%d", &a,&c,&b);
	
	
	
	if(c==43)
	 printf("=%d", a+b);
	 
	else if(c==45)
	 printf("=%d", a-b);
	 
	else if(c==42)
	 printf("=%d", a*b);
	 
	else if(c==47)
	 printf("=%d", a/b);
   
   return 0;
}
