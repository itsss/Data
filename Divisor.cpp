#include <stdio.h>
int main() 
{
 int i;
 int number;
 printf("Input number");
 scanf("%d", &number);
 for(i=1; i<=number; i++)
 {
  if(number%i==0)
  {
  	printf("%d ", i);
  }
 }
 printf("\n");
}
