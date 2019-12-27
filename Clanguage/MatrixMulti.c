#include <stdio.h>
#include <conio.h>

int main() {

int r1,c1,r2,c2,i,j;
int a[10][10],b[10][10],c[10][10];

printf("Please Enter rows of Matrix A: ");
scanf("%d",&r1);

printf("Please Enter Colm of Matrix A: ");
scanf("%d",&c1);

printf("\n\nhm........Great, Now time for Matrix B\n" );
printf("------------------------------------------\n\n" );

printf("\nPlease Enter rows of Matrix B: ");
scanf("%d",&r2);

printf("Please Enter Colm of Matrix B: ");
scanf("%d",&c2);

printf("\n\nOkay You want to Multiply A[%dX%d] and B[%dX%d]\n\n",r1,c1,r2,c2);
printf("---------------------------------------------------\n\n" );

if(c2==r1){
printf(">>Yeee.............Multiplication is possible<<\n" );
printf("---------------------------------------------------\n\n" );

printf("Please Enter Entries of matrix A\n\n" );

for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
    scanf("%d",&a[i][j]);
    }
  printf("\n");
}

printf("matrix A\n" );
printf("---------\n\n" );

for(i=0;i<r1;i++
    for(j=0;j<c1;j++){
      printf("\t%d",a[i][j]);
    }
  printf("\n");
}


}

else
printf("Better luck next time :( \n" );

return 0;
}
