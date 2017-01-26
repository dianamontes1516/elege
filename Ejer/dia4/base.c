#include <sqlite3.h>
#include <stdio.h>
/* Compilar con bandera -l sqlite3 */
int main(void){
	printf("%s\n",sqlite3_libversion());
}
