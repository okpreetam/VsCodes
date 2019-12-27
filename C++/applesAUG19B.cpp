/*------------------------------------
-----------Author: Ghosty-------------
----------Coded on 11AUG19------------
--------------------------------------
#include <bits/stdc++.h>
using namespace std;
// C++ program to find given two array
// are equal or not
// Returns true if boxOfEmp1[0..n-1] and boxOfEmp2[0..m-1]
// contain same elements.
bool areEqual(int boxOfEmp1[], int boxOfEmp2[], int n, int m)
{
    // If lengths of array are not equal means
    // array are not equal
    if (n != m)
        return false;

    // Sort both arrays
    sort(boxOfEmp1, boxOfEmp1 + n);
    sort(boxOfEmp2, boxOfEmp2 + m);

    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (boxOfEmp1[i] != boxOfEmp2[i])
            return false;

    // If all elements were same.
    return true;
}

int sum(int *boxOfEmp2,int noOfbox)
{
  int sum=0,i;
  for(i=0;i<noOfbox;sum+=(*(boxOfEmp2+i)),i++);
    return sum;
}
// Driver Code
int main(){
 int test;
 scanf("%d",&test);
 while(test--){
    int noOfApple,noOfbox,i;
    scanf("%d%d",&noOfApple,&noOfbox);

    if((noOfApple%noOfbox)==0)
    {

    int boxOfEmp1[noOfbox],boxOfEmp2[noOfbox],count=noOfApple;

    for(i=0;i<noOfbox;boxOfEmp1[i]=0,boxOfEmp2[i]=0,i++);

    for(i=0;i<noOfbox;boxOfEmp1[i]+=noOfApple/noOfbox,i++);

    while(count){
      for(i=0;i<noOfbox;i++){
      if(sum(boxOfEmp2,noOfbox) < noOfApple){        //Brainfucksec
      printf("\n%d\n",sum(boxOfEmp2,noOfbox));
      boxOfEmp2[i]+=noOfbox;
      for(int j=0;j<noOfbox;printf("%d\t",boxOfEmp2[j]),j++);
      }
      }
    count=(count - noOfbox);
    }

    int n = sizeof(boxOfEmp1) / sizeof(int);
    int m = sizeof(boxOfEmp2) / sizeof(int);

    if (areEqual(boxOfEmp1, boxOfEmp2, n, m))
        cout <<"NO"<<endl;
    else
        cout <<"YES"<<endl;

    }
 }
}
*/

/*------------------------------------
-----------Author: Ghosty-------------
----------Coded on 11AUG19------------
--------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
// Function to find given two array
// are equal or not
bool areEqual(int boxOfEmp1[], int boxOfEmp2[], int n, int m)
{
    // If lengths of array are not equal means
    // array are not equal
    if (n != m)
        return false;

    // Sort both arrays
    sort(boxOfEmp1, boxOfEmp1 + n);
    sort(boxOfEmp2, boxOfEmp2 + m);

    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (boxOfEmp1[i] != boxOfEmp2[i])
            return false;

    // If all elements were same.
    return true;
}

int sum(int *boxOfEmp2,int noOfbox)
{
  int sum=0,i;
  for(i=0;i<noOfbox;sum+=(*(boxOfEmp2+i)),i++);
    return sum;
}

// Driver Code
int main(){
 int test;
 scanf("%d",&test);
 while(test--){
    int noOfApple,noOfbox,i;
    scanf("%d%d",&noOfApple,&noOfbox);

    if((noOfApple%noOfbox)==0)
    {

    int boxOfEmp1[noOfbox],boxOfEmp2[noOfbox],count=noOfApple;

    for(i=0;i<noOfbox;boxOfEmp1[i]=0,boxOfEmp2[i]=0,i++);

    for(i=0;i<noOfbox;boxOfEmp1[i]+=noOfApple/noOfbox,i++);

    while(count){
      for(i=0;i<noOfbox;i++){
      if(sum(boxOfEmp2,noOfbox) < noOfApple){        //Brainfuck
/*      printf("\n%d\n",sum(boxOfEmp2,noOfbox));*/
      boxOfEmp2[i]+=noOfbox;
/*      for(int j=0;j<noOfbox;printf("%d\t",boxOfEmp2[j]),j++);*/
      }
      }
    count=(count - noOfbox);
    }

    int n = sizeof(boxOfEmp1) / sizeof(int);
    int m = sizeof(boxOfEmp2) / sizeof(int);

    if (areEqual(boxOfEmp1, boxOfEmp2, n, m))
        cout <<"NO"<<endl;
    else
        cout <<"YES"<<endl;

    }
 }
}
