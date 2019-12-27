/*------------------------------------
-----------Author: Ghosty-------------
----------Coded on 11AUG19------------
--------------------------------------*/
#include<stdio.h>

int brainfuck(int *box1,int *box2,int noOfbox){
int count=0;
for(int y=0;y<noOfbox;y++){
if( (*(box1+y)) != (*(box2+y)) )
count++;
}
return count;
}

int sum(int *box,int n)
{
  int sum=0,i;
  for(i=0;i<n;sum+=(*(box+i)),i++);
  return sum;
}

int main(){
 int test;
 scanf("%d",&test);
 while(test--){
    int noOfApple,noOfbox,i;
    scanf("%d%d",&noOfApple,&noOfbox);

    if((noOfApple%noOfbox)==0)
    {

    int box1[noOfbox],box2[noOfbox],count=noOfApple;

    for(i=0;i<noOfbox;box1[i]=0,box2[i]=0,i++);

    for(i=0;i<noOfbox;box1[i]+=noOfApple/noOfbox,i++);

    while(count){
      for(i=0;i<noOfbox;i++){
      if(sum(box2,noOfbox) < noOfApple)       //Brainfuck
      box2[i]+=noOfbox;
      }
    count-=noOfbox;
    }

    if(brainfuck(box1,box2,noOfbox))
    printf("YES\n");
    else
    printf("NO\n");

    }
 }
}
