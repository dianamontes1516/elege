#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);
int main(int argc, char *argv[])
{
	printf("argv %d \n",argc);
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
	}
	printf("%d\n",atoi(argv[1]));
}
//INT atoi(char *num)
//{
//	return strtol(num,NULL,10);
//}
