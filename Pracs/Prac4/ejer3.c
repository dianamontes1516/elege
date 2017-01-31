#include <stdio.h>
#include <math.h>

int primo(int n)
{
  int m = sqrt(ceil(n));
  while(m---1) {
    if(fmod(n,m+1) == 0) return 0;
  }
  return 1;
}

int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  int i = 1;
  while(n){
    if(primo(i)){
      printf("%d\n",i);
      n--;
    }
    i++;
  }
  return 0;
}
