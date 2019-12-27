#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--){
  int n,carry=0,d=1,a[10000]={1},i,j,mul;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=0;j<d;j++){
      mul=a[j]*i+carry;
      a[j]=mul%10;
      carry=mul/10;
    }
    while(carry>0){
      a[d++]=carry%10;
      carry=carry/10;
    }
  }

  for(j=d-1;j>=0;j--)
  printf("%d",a[j]);

  printf("\n");

}

return 0;
}
/*

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[2000],i,j,carry=0;
        for(i=1;i<2000;i++)
            a[i]=0;
        a[0]=1;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<2000;j++)
            {
                long long int temp=a[j]*i+carry;
                a[j]=temp%10;
                carry=temp/10;
            }
        }
        for(j=1999;j>=0;j--)
        {
            if(a[j]!=0)
                break;
        }
        for(i=j;i>=0;i--)
            printf("%lld",a[i]);
        printf("\n");
    }
    return 0;
}*/
