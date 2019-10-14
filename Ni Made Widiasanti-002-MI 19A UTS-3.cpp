#include <stdio.h>
 
int main(void)
{
  for (int i = 10; i <= 20; i++) {
    for (int j = 10; j <= 20; j++) {
      printf("%i * %i = %i\n",i,j,j*i);
    }
    printf("\n");
  }
  return 0;
}
