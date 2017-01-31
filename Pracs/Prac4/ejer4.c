#include <stdio.h>

/* programa que recibe u caracter 
 * eimprime su código en hex. */
int main(int argc, char *argv[])
{
  char n;
  scanf("%c",&n);
  printf("0x%x\n",n);
  return 0;
}
