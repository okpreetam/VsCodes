#include<stdio.h>
int main()
{
    int t,n,i,c;
    int a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        c=0;
        for(i=11;i>=0;i--)
        {
            if(n>=a[i])
            {
                n-=a[i];
                c++;
                i++;
            }
            if(n==0)
            break;
        }
        printf("%d\n",c);
    }
    return 0;
}





#include<stdio.h>
#include<math.h>
typedef long long int ll;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int i,ans=0,count=0,n,a[12];
        scanf("%d",&n);

        for(i=0;i<=11;i++)a[i]=pow(2,i);
        // for(i=0;i<=11;i++)printf("%d\n",a[i]);

        for(i=11;i>=0;i--){

            while(n>=2*a[11]){
                n-=a[11];
                count++;
            }

            if(n==a[i]){
                ans=a[i]+ans;
                count++;
                n-=a[i];
            }
            else if(n>a[i]){
                ans=a[i]+ans;
                count++;
                n-=a[i];
            }

            if(n==0){
                printf("%d\n",count);
                break;
            }

        }

    }
    return 0;
}
