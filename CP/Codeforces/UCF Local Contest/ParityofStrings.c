/*------------------------------------
-----------Author: Ghosty-------------
----------Coded on 12AUG19------------
--------------------------------------*/
#include <stdio.h>
#include <string.h>

int main()
{
   char str[10000], ch;
   int i,j, frequency = 0;
   scanf("%[a-z]",str);

   if( (strlen(str)>=1) && (strlen(str)<=70) )
   {

   if((strlen(str)%2)==1){
   printf("2");
   goto exit;
   }

   for(i = 0; str[i] != '\0'; ++i){
   for(j = 0; str[j] != '\0'; ++j)
   {
       if(str[i] == str[j])
           ++frequency;
   }
   if((frequency%2)==1){
     printf("1");
     goto exit;
   }
   else
   frequency=0;
  }

  printf("0");
  }

exit:
  return 0;
}
