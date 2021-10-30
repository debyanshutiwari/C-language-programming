#include <stdio.h>

int main() {
    int i=0,n;
    printf("Enter a value\n");
    scanf("%d\n",&n);
    do{
        printf("Value is %d\n",i);
         i++;
    }
    while(i<=n);
    
    return 0;
}