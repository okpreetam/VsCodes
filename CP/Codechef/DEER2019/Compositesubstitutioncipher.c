/*------------------------------------
-----------Author: Ghosty-------------
----------Coded on 18AUG19------------
--------------------------------------


****For Encryption****

#include <stdio.h>
#include <string.h>

int main(){

  int k1,k2,k2i,i,j,size;
  char pt[1000000],ct[1000000];

  scanf("%[^\n]",pt);
  scanf("%d %d",&k1,&k2);

  size=strlen(pt);
//  printf("%d\n",size);

  for(i=0;i<size;i++){
    ct[i]=((((pt[i] - 65) * k2) + k1 ) % 26) + 65;
    if(i==size-1)
    ct[i+1]='\0';
  }

  printf("%s",ct);


return 0;
}*/


/************For Decription************/

#include <stdio.h>
#include <string.h>

int main(){

  int k1,k2,k2i,i,j,size,brainfuck;
   char pt[1000000],ct[1000000];

  scanf("%[A-Z]",ct);
  scanf("%d%d",&k1,&k2);

  size=strlen(ct);
//  printf("Size: %d\n",size);         //to print string size

  for(i=0;i<size;i++){
    for(j=0;j<26;j++){
     if((j*k2)%26==1)
     k2i=j;
     }

     brainfuck=((ct[i]-65) - k1)*k2i;   // our -ve no.

     if(brainfuck<0)
     pt[i]=(26+((brainfuck)%(26))) + 65; // calculating (-ve no) mod 26
     else
     pt[i]=((brainfuck)%26) + 65;

    if(i==size-1)
    pt[i+1]='\0';
  }

  printf("%s\n",pt);


return 0;
}
