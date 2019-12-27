#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int top = -1;
int stack[MAX];

void push(){
int pushedvalue[50];

  if(top==MAX-1){
  printf("\n\n---------------------------------");
  printf("\n!!!!!!! Stack is Overflow!!!!!!!!!\n");
  printf("---------------------------------\n\n");
  }
  else
  {
    printf("\n Enter value to be pushed in stack: ");
    scanf("  %c",pushedvalue);
    printf("%c",pushedvalue);
    top=top+1;
    stack[top]=pushedvalue;
  }
}

void pop(){

  if(top==-1)
  printf("Stack is Underflow\n");
  else
  {
    printf("popped element is: %d \n\n",stack[top]);
    top=top-1;
  }

}


void display()
{
int i;
if(top==-1){
  printf("\n\n---------------------------------");
  printf("\n!!!!!!! Stack is Empty!!!!!!!!!\n");
  printf("---------------------------------\n\n");
}
else
{
printf(" Stack Elements Are:\n");
for(i=top;i>=0;i--)
printf(" %d\n",stack[i]);
}

}


int main() {
  int v1;

  while(1){
    printf("\n\n what whould you like for dinner:\n");
    printf(" ---------------------------------\n");
    printf(" 1) PUSH\n 2) POP\n 3) Display\n 4) Exit\n\n Enter Your Choice here: ");
    scanf("%d",&v1);
    switch (v1) {
       case 1:
       push();
       break;

       case 2:
       pop();
       break;

       case 3:
       display();
       break;

       case 4:
       exit(1);

       default:
       printf("---------------------------------");
       printf("\n!!!!!!! wrong choice !!!!!!!!\n");
       printf("---------------------------------\n");
     }
   }

}
