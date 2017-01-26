/*** @AUTHOR Diana Montes
 * La práctica genera un número aleatorio a partir
 * de los primeros 4 bytes del dispositivo /dev/random 
 */
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h> 
#include<fcntl.h> //  Macros para tipos de apertura
#include<unistd.h>
/* Llamadas al sistema 
 * write y open
*/

int main(int argc, char *argv[])
{

#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random\0";

	/* Open regresa el descriptor de archivo y se ve como un entero 
	 * Si regresa -1 es que no lo encontro.
	 */
	fd=open(archivo,O_RDONLY);
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	//printf("Descriptor de archivo: %d\n",fd);

	 /* #if 0 read. llamadas al sistema
	  * @param int fd - descriptor de archivo
	  * @param char* - contenido
	  * @param int número de bits 
	  */
	int buf;
	if(read(fd,&buf,4)<0)
	  fprintf(stderr,"No se pudo ler \n");
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
	printf("%d\n",buf);
}
