#include<stdio.h>
typedef long long int ll;
int main(){
int round;
scanf("%d",&round);
 int i,j,leadp1[round+1]={0},leadp2[round+1]={0},p1,p2,lp1=0,lp2=0;

for(i=0;i<round;i++){
  scanf("%d%d",&p1,&p2);
  leadp1[i+1]=p1-p2+leadp1[i];
  leadp2[i+1]=p2-p1+leadp2[i];
  if(leadp1[i+1]>lp1)
  lp1=leadp1[i+1];
  if(leadp2[i+1]>lp2)
  lp2=leadp2[i+1];
  }
  
  if(lp1>lp2)
  printf("1 %d",lp1);
  else
  printf("2 %d",lp2);

}
