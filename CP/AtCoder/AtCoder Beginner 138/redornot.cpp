#include<stdio.h>

int main(){
int a; char s[10];

scanf("%d",&a);
scanf("%s",s);

if(a>=2800 && a<5000){
  if(a<3200)
  printf("red");
  else
  printf("%s",s);
}

}
