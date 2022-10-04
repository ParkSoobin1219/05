#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, trial;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &num);
		
		if(num>1219)
		printf("low!\n");
		
		else if(num<1219)
		printf("high!\n");
		
		trial++;
	}
	while(num!=1219);
	
	printf("Congratulation! trials: %d", trial);
   return 0;
}
