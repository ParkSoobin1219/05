#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int a,i;
   int b=0;
   
   printf("input a numbder :");
   scanf("%d", &a);
   
   for(i=0;i<=a;i++)
    b=b+i;
    
   printf("The result is %d", b);
   
   return 0;
}
