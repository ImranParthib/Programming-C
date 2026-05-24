#include<stdio.h>
int main(){

    int i,N,Sum=0;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    for(i=1;i<=N; i=i+2){
        Sum+=i;
    }
    printf("The sum of the series is: %d\n",Sum);

    return 0;
}