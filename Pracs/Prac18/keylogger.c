#include<stdio.h>
#include<linux/input.h>
#include<stdlib.h>
#include<sys/stat.h> 
#include<fcntl.h> //  Macros para tipos de apertura
#include<unistd.h>

int main(int argc, char *argv[])
{
  struct input_event ev;
  int fd = open("/dev/input/event7",O_RDONLY);
  printf("File descriptor %d\n",fd);
  read(fd, &ev, sizeof(struct input_event));
  printf("%d",ev.value);
  /*  for(;;){
    read(fd, &ev, sizeof(struct input_event));
    printf("%d",ev.value);
    }*/
  return 0;
}
