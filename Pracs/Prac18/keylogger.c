#include<stdio.h>
#include<linux/input.h>
#include<stdlib.h>
#include<sys/stat.h> 
#include<fcntl.h> //  Macros para tipos de apertura
#include<unistd.h>

int main(int argc, char *argv[])
{   
  struct input_event ev;
  int fd = open("/dev/input/event0",O_RDONLY);
  read(fd, &ev, sizeof(struct input_event));
  for(;;){
    printf("%d",ev.value);
    read(fd, &ev, sizeof(struct input_event));
    printf("%d",ev.value);
  }
   return 0;
}
