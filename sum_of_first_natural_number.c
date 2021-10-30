#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a value\n");
    scanf("%d\n",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
       
    }
    printf("%d\n",sum);
    return 0;
}