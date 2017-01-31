#include <stdlib.h>
#include <stdio.h>

/* Solo funcinona hasta 33 :/*/
unsigned int fact(unsigned int num){
  if(num<0) exit(1);
  if(num == 1) return 1;
  else  return num*fact(num-1);
}

int main(int argc, char *argv[])
{
  printf("Introduce numero para concoer su factorial\n $ ");
  unsigned int e;
  scanf("%d",&e);
  printf("El factorial de %u es; %u\n", e,fact(e));
  return 0;
}
