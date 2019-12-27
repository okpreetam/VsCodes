#include <stdio.h>

int main(){
  int var;
  int *pointer;

  var=5;
  pointer=&var;

printf("%d %d %d %d\n",var,&pointer,pointer,&var );
}
