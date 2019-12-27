/*#include<stdio.h>
typedef long long int ll;
int main(){
    int n;
    scanf("%lld",&n);
    ll a[n],i,j,temp;

    for(i=0;i<n;scanf("%lld",&a[i]),i++);

    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        if(a[j]<a[i]){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }

    for(i=0;i<n;i++)
    printf("%lld\n",a[i]);
 }


#include<stdio.h>
typedef unsigned long ll;
int main(){
    int n;
    scanf("%lu",&n);
    ll a[n],i,j;

    for(i=0;i<n;scanf("%lu",&a[i]),i++);

    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        if(a[j]<a[i]){
          a[j]=a[j]^a[i];
          a[i]=a[j]^a[i];
          a[j]=a[j]^a[i];
        }
      }
    }

    for(i=0;i<n;printf("%lu\n",a[i]),i++);
 }
 */

 #include <stdio.h>

int main(void) {
    int test;int i;
	scanf("%d",&test);
	int arr[10000001]={0};

	for(int j=0;j<test;j++)
	{
	    scanf("%d",&i);
	    arr[i]++;
	}
	int n=0;
	while(n<10000001)
	    {
	    while(arr[n])
	    {
	        printf("%d\n",n);
	        arr[n]--;
	    }
	    n++;
	    }
	return 0;
}
