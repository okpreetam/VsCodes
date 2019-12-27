#include<stdio.h>

int main(){
 int test;
 scanf("%d",&test);
 while(test--){
   int N,M,K,L,R,i,j;
   scanf("%d%d%d%d%d",&N,&M,&K,&L,&R);

   int can[N][2];
   int temp,otemp,flag=0;
   int price=2147483647;

   for(i=0;i<N;i++){
     for(j=0;j<2;j++){
     scanf("%d",&can[i][j]);
     }
   }

   for(i=0;i<N;i++){
    temp=can[i][0];
    otemp=M;
    while(otemp--){
    if(temp>K+1)
    temp--;
    else if(temp<K-1)
    temp++;
    else if(temp>=(K-1) && temp<=(K+1))
    temp=K;
   }

   if((temp>=L && temp<=R) && (price>=can[i][1]))
   price=can[i][1];
   else
   flag++;
   }

 if(flag==N)
 printf("-1\n");
 else
 printf("%d\n",price);

}

}
