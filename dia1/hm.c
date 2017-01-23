#include<stdio.h>
#include<limits.h>

char *cadena = "Hola, mundo!!!\n";
int main() {
	/* Bits en un char */
	printf("%s"," ******** char  ******\n");
	printf("Bits en un char: %u\n",CHAR_BIT);
	/* Enteros sin signo */
	printf(" ****** enteros sin signo  *****\n");
	printf("Minimo de entero sin signo: %u \n",0);
	printf("Máximo de entero sin signo: %u \n",UCHAR_MAX);
	/* Enteros con signo */
	printf(" ******** enteros con signo  *****\n");
	printf("Minimo entero con signo: %d\n",INT_MIN);
	printf("Máximo entero con signo: %d\n",INT_MAX);
	/* Long con signo */
	printf(" ******** Long con signo  *****\n");
	printf("Minimo long con signo: %d\n",LLONG_MIN);
	printf("Máximo entero con signo: %d\n",INT_MAX);
	
 }

