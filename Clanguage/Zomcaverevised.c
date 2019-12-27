/*#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
    long long int n;
    scanf("%lld",&n);
    int cave[n],radiation[n],zom[n],i,j,zomh=0,radm=0;
    for(i=0;i<n;scanf("%d",&cave[i]),i++);

    for(i=0;i<n;scanf("%d",&zom[i]),zomh+=zom[i],radiation[i]=0,i++);

    for(i=0;i<n;i++)
    for(j=0;j<(2*cave[i]) && j<n;radiation[j]+=1,j++);

    for(i=0;i<n;radm+=radiation[i],i++);

    if(zomh==radm)
    printf("YES\n");
    else
    printf("NO\n");
 }
}


#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
    int n;
    scanf("%d",&n);
    int cave[n],zom[n],i,j,k,zomh=0,rads=0;
    for(i=0;i<n;scanf("%d",&cave[i]),i++);

    for(i=0;i<n;i++)
    {
      j=i-cave[i];
      k=cave[i]+i;
      if(j<=0)
      j=0;
      if(k>=n)
      k=n-1;
      rads=rads+(k-j+1);
    }

    for(i=0;i<n;scanf("%d",&zom[i]),i++);
    for(i=0;i<n;zomh+=zom[i],i++);

    printf("\n%d\n%d\n",rads,zomh);

    if(zomh==rads)
    printf("YES\n");
    else
    printf("NO\n");
 }
}

*/

#include<stdio.h>
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
    long long int n;
    scanf("%lld",&n);
    int i,j,a[n],b[n],s=0,c=0,p,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
      p=i-a[i];
      k=a[i]+i;
      if(p<=0)
      p=0;
      if(k>=n)
      k=n-1;
      s=s+(k-p+1);
    }
    for(i=0;i<n;i++)
    c+=b[i];

    printf("\n%d\n%d\n",s,c);

    if(s==c)
    printf("YES\n");
    else
    printf("NO\n");
  }
}
