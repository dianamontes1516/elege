#include <stdio.h>
#include<limits.h>
#include <time.h>
#include <stdlib.h>

/** 
 *  Calcula la fecha en la que no
 * los segundos trancurridos despues de 01.01.1970
 * ya no podrán ser alojados en la variable time.
 */
int main(int argc, char *argv[])
{
  long* z =(long*)malloc(sizeof(long));
  *z = INT_MAX;
  printf("%s\n", ctime(z));
  return 0;
}


