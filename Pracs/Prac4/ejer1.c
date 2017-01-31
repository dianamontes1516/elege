#include <stdio.h>

/* Imrpime los numero de 0 al entero que sea 
 * intruducido por el usuario
 */
int main(int argc, char *argv[])
{
  printf("Ingresa un número. Se imprimirán del 0 al numero ingresado.\n$ ");
  int e,a ;
  scanf("%d",&e);
  a=e;
  if(e>0)  while(e+1)printf("%d\n",a-e--);
  else while(e-1)printf("%d\n",a-e++);
  return 0;
}

