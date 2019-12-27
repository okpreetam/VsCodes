#include<stdio.h>
typedef long long int ll;
int main(){
int n,m,i,j,k,p,na1,na2;

scanf("%d",&n);
int a1[n];
for (i=0;i<n;scanf("%d",&a1[i]),i++);

scanf("%d",&m);
int a2[m];
for (i=0;i<m;scanf("%d",&a2[i]),i++);


for(i=0;i<n;i++){
    na1=a1[i];
  for(j=0;j<m;j++){
      na2=a2[j];

    for(k=0;k<m;k++)
    if((na1+na2)==a2[i]){
    break;
    }

    for(p=0;p<n;p++)
    if((na1+na2)==a1[i]){
    break;
    }
    }
    printf("%d %d\n",na1,na2);
  }
}
