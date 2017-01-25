#include<stdio.h>

/* @author Diana Montes
 * Imprime el último argumento pasado
 * al ejecutar
 */
int main(int argc, char* argv[]){
  printf("%s\n", argv[argc-1]);
}
