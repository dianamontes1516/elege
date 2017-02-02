/** Hacer que todas las variables vivan en el heap
 * o de perdida (como en este caso) 
 * reducir el códico.
*/
#include<stdio.h>
int main()
{
  char* c = "hola\0";
  int i=0;
  while(c[i])
    printf("%c\n",c[i++]);
}
