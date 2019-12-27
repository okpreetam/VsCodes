#include<stdio.h>
typedef unsigned long long int shi;
int main(){
shi thulla,catchme,igotyou;

scanf("%llu",&thulla);

for(shi i=0;i<thulla;i++){
  scanf("%llu",&catchme);

  if(catchme==1 || catchme==2)
  igotyou=catchme;
  else
  igotyou=catchme/2+1;

  printf("%llu\n",igotyou);
}

}
