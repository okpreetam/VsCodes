/*#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int i,n,sum = 0,max=0;
        scanf("%d",&n);
        int goal[n],foul[n];
        for(i=0;i<n;scanf("%d",&goal[i]),i++);
        for(i=0;i<n;scanf("%d",&foul[i]),i++);
        for(i=0;i<n;i++){
          sum=20*goal[i]-10*foul[i];
          if(sum>max)
          max=sum;
        }
        printf("%d\n",max);
    }
}

#include<stdio.h>
int die(int *diey,int *dien,int a){
for(int y=0;y<a;y++){
if( (*(diey+y)) < (*(dien+y)) )
return 1;
}
return 0;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
    int n,i,j;
    scanf("%d",&n);
    int thrash[n],cave[n];
    for(i=0;i<n;scanf("%d",&thrash[i]),i++);
    for(i=0;i<n;cave[i]=0,i++);
    for(i=1;i<=n;i++){
      for(j=1;j<=2*i;j++){
        if(j<=n)
        cave[j-1]+=1;
      }
    }
    for(i=0;i<n;printf("%d\t",cave[i]),i++);

    //Time for zombie
    int zom[n];
    for(i=0;i<n;scanf("%d",&zom[i]),i++);

    for(i=0;i<n;printf("%d\t",zom[i]),i++);
   die(cave,zom,n) ? printf("NO\n") : printf("YES\n");
   // if(die(cave,zom,n))
   // printf("NO\n");
   // else
   // printf("YES\n");

 }

}




#include<stdio.h>

int die(int *radi,int *zombi,int a){
for(int y=0;y<a;y++){
if( (*(zombi+y)) <= (*(radi+y)) )
return 1;
}
return 0;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
    int n,i,j,rads=0,zomhs=0,zomm=0,radm=0;
    scanf("%d",&n);
    int cave[n];
    for(i=0;i<n;scanf("%d",&cave[i]),i++);
    int radiation[n];
    for(i=0;i<n;radiation[i]=0,i++);

    for(i=0;i<n;i++)
    for(j=0;j<(2*cave[i]) && j<n;radiation[j]+=1,j++);

    int zom[n];

    for(i=0;i<n;i++){
      scanf("%d",&zom[i]);
      zomhs+=zom[i];
      if(zom[i]>=zomm)
      zomm=zom[i];
    }

    for(i=0;i<n;i++){
      rads+=radiation[i];
      if(radiation[i]>=radm)
      radm=radiation[i];
    }


    if(zomhs==rads && die(radiation,zom,n) && zomm<=radm)
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
    for(i=0;i<n;printf("%d\t",a[i]),i++);
    printf("\n%d\n",s);

    for(i=0;i<n;i++)
    c+=b[i];

    for(i=0;i<n;printf("%d\t",b[i]),i++);
    printf("\n%d\n",c);

    if(s==c)
    printf("YES\n");
    else
    printf("NO\n");
  }
}
