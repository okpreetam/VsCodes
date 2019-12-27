#include<stdio.h>

int main(){
int n,i; float sum=0.00;
scanf("%d",&n);
int a[n];
float in[n];
for (i = 0; i < n;scanf("%d",&a[i]),in[i]=(float)1/a[i],sum+=in[i], i++);
if(n==1)
printf("%d",a[0]);
else
printf("%f",1/sum);

}
