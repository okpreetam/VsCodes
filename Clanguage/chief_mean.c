#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t > 0){
        int i, n;
        double sum = 0;
        int temp = 0;
        scanf("%d",&n);
        int arr[n];
        for (i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        double avg = sum/n;
        for (i = 0; i < n; i++){
            if (arr[i] == avg){
                temp = 1;
                break;
            }
        }
        if (temp == 1)
        {
            printf("%d\n", i+1);
        }
        else{
            printf("Impossible\n");
        }
       t--;
    }
}
