/*#include<stdio.h>
int fact=1;
int factorial(int a){
  if(a==1)
  return fact;
  factorial(a-1);
  fact=fact*a;
}

int main(){
  int lol;
  printf("Enter No. : ");
  scanf("%d",&lol);
  lol=factorial(lol);
  printf("\nFactorial is : %d",lol);
}

https://internshala.com/1-day-in-your-dream-company?utm_source=bb_fb&utm_medium=bb1011559
/*int main(){
  int x,y=2;
  printf("scanf: %d printf: %d  x++: %d",scanf("%d",&x),printf("lol"),y+++++y++y);
}
Hello my dear fellows,first of all i want to thank you to introduce myself. My name is Preetam Meena.I am currently working as an IT Manager in PlabelTech. I have completed my masters in Electrical Engg. & Computer Science from Indian Institute of Science Education and Research Bhopal. In my last 5 years i worked on various python based project. i have been Student Developer in Google Summer of Code (2018) under the OWASP Foundation. in my free time i do comitetive programming & ctfs
*/
#include <stdio.h>

/*void toh(int ndisk,int source,int aux,int dest)
{
    if(ndisk>0)
    {
        toh(ndisk-1,source,dest,aux);
        printf("move disk from tower %d ------> %d\n",source,dest);
        toh(ndisk-1,aux,source,dest);
    }
}

int main()
{
   int source=1,aux=2,dest=3,ndisk=2;
   printf("sequence is: \n");
   toh(ndisk,source,aux,dest);
}*/

int main(){
    int a=50;
    int b=91;
    int c=90;
    printf("%d %d %d\n");
    printf("%p %p %p",&a,&b,&c);
}
