#include<stdio.h>
typedef unsigned long long int shi;
int main(){
shi thulla,catchme,ok;

scanf("%llu",&thulla);

for(shi i=0;i<thulla;i++){
  scanf("%llu",&catchme);
  shi igotyou=0;

  while(catchme>0){
  ok=catchme%10;
  if(ok==4)
  igotyou++;

  catchme/=10;
  }

  printf("%llu\n",igotyou);
}
}
