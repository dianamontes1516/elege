#include <stdio.h>
/* @author Diana Montes
* @
*/

char* texto = "Este curso su me gusta matarilelirelo";

/* Funcion que recibe una palabra para 
 * hacerle xor a cada una de las palabras 
 * texto pĺano que se quiere cifrar
 * @param clave char * -  clave con la que quiero 
 * cifrar mi texto
*/
void cifra(char* clave) {
  int c_longitud = sizeof(clave)/sizeof(char);
  printf("long clave %u \n",sizeof(clave));
  printf("long sizeof_char %u \n",sizeof(char));
  printf("long c_longitud %d \n",c_longitud);
  /* int t_longitud = sizeof(texto)/sizeof(char);
 
  for(int a=0;a<t_longitud;a++) {
    //printf("%c",texto[a]^clave[a%c_longitud]);
    texto[a] = texto[a]^clave[a%c_longitud];    
  }
  printf(texto);
  for(int a=0;a<t_longitud;a++) {
    //printf("%c",texto[a]^clave[a%c_longitud]);
    texto[a] = texto[a]^clave[a%c_longitud];    
  }
  printf(texto); */
}

int main() {
  char clave[10];
  scanf("  %s  ", clave);
  cifra(clave);
  //printf(clave^"")
  //return 1;
}
