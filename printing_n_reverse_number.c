#include<stdio.h>
int main(){
    int n;
    printf("enter the value\n");
    scanf("%d\n",&n);
    for(int i=n;i;i--){
        printf("%d\n",i);
    }
    return 0;
}