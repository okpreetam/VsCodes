#include<stdio.h>
#include<math.h>
typedef long long int ll;
int main()
{
int a=50;
int *loo;
loo=&a;

  printf("%d\n",loo+1);
  printf("%d\n",&loo);
  printf("%d\n",*(loo+0));
return 0;
}
