#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
  if(argc<2)
    {
      perror("Se necesita un argumento\n");
      return(1111);
    }
    unsigned char digest[MD5_DIGEST_LENGTH];
    int fd = open(argv[1],O_RDONLY);
    off_t fsize;
    fsize = lseek(fd, 0, SEEK_END);
    char * string = (char *)malloc(fsize);
    read(fd,&string,fsize);
    MD5((unsigned char*)&string, strlen(string), (unsigned char*)&digest);
    char mdString[33];
    for(int i = 0; i < 16; i++)
         sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    printf("md5 digest: %s\n", mdString);
    return 0;
}

// -*- compile-command: "gcc -Wall md5.c -o md5 -lcrypto -lssl" -*-
