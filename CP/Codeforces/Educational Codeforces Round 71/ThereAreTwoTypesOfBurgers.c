#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);

 for(int i=0;i<t;i++){
 int t,b,b2,h,c,hprice,cprice,profit=0,hok=0,cok=0;
     scanf("%d%d%d",&b2,&h,&c);
     scanf("%d%d",&hprice,&cprice);
     b=b2/2;
     if(b>0){
     if(hprice>cprice){
       while(b--&&h--)
       hok++;
       b++;
       while (b--&&c--)
       cok++;
       profit=hok*hprice+cok*cprice;
       }
      else{
        while(b--&&c--)
        cok++;
        b++;
        while(b--&&h--)
        hok++;
        profit=hok*hprice+cok*cprice;
        }
    printf("%d\n",profit);
  }
  else
  printf("0\n");
}
}
