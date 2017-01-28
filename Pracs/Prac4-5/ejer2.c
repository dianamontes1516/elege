#include <stdio.h>

/* Programa que imprime los números nones
 * del 1 al número ingresado por el usuario
 */
int main(int argc, char *argv[])
{
  int e;
  scanf("%d",&e);
  for(int i=1;i<=e;i++) printf((i&1)?"%d\n":"",i); 
  
  return 0;
}
