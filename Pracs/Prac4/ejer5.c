#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* password= "nosec123,"; 

int main(int argc, char *argv[])
{
  char* pass = (char *)malloc(sizeof(char) * 100);
  ;
  printf("Introduce pass: \n$ ");
  scanf("%s",pass);
  if(strcmp(pass,password)) printf("GTFOH!\n");
  else printf("OK\n");
  return 0;
}
