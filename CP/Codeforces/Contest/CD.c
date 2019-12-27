#include <stdio.h>
#include <string.h>

int main()
{
   long long int n,count=0,i,j,max=0,x=0;
   scanf("%lld",&n);

   long long int arr[n];

   for(i=0;i<n;scanf("%lld",&arr[i]),i++);


   for(i=0;i<n;i++){
     if(arr[i]>=max)
     max=arr[i];
   }



     for(j=0;j<n;j++){
     for(i=1;i<=max;i++){
       if(arr[j]%i==0)
       count++;
     }
     if(count==n){
     x++;
     count=0;
    }
  }

   printf("%lld",x);

}
