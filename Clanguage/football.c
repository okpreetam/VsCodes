#include<stdio.h>
typedef long long int ll;
int main(){
  int a=4,b=15,c=29;
  if(c>b&&b>a)
  printf("l");
  else
  printf("%d\n",sizeof(int));
 // int test;
 // scanf("%d",&test);
 // while(test--){
 //    ll n,rev,i,sum=0;
 //    scanf("%lld",&n);
 //
 //    while(n!=0){
 //      ok=n%10;
 //      rev=rev*1;
 //      n=n/10;
 //    }
 //
 //    printf("%lld\n",sum);
 }




/*#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t > 0){
        int i,n,sum = 0,max=0;
        scanf("%d",&n);
        int goal[n],foul[n];
        for(i = 0; i < n; i++)
        scanf("%d", &goal[i]);
        for(i = 0; i < n; i++)
        scanf("%d", &foul[i]);

        for(i = 0; i < n; i++){
          sum=20*goal[i]-10*foul[i];
          if(sum>max)
          max=sum;
        }

        printf("%d",max); <<<<<<---------------error here  missing /n

       t--;
    }
}
*/
