#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
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
	char *archivo="/tmp/archivo\0";

	/* Open regresa el descriptor de archivo y se ve como un entero 
	 * Si regresa -1 es que no lo encontro.
	 */
	fd=open(archivo,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

	 /* #if 0 write. llamadas al sistema
	  * @param int fd - descriptor de archivo
	  * @param char* - contenido
	  * @param int número de bits 
	  */
	if(write(fd,"hola123.,\n",10)==-1)
		fprintf(stderr,"Error al escribir en el archivo.");
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
