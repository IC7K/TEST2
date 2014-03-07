#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdint.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>
#include <sys/time.h>

int main()
{
double one=123.55, two=10.123;

printf("Primer Float\n");
printf("%.1f\n",one);	
printf("%3.1f\n",two);	
printf("%-10.1f\n",two);
printf("%3.8d\n", 1000);

  printf("%f\n", two);
  
  printf("%10\n", two);  
  printf("%10.1f\n", two);
  
  printf("%012f\n", two);	
}