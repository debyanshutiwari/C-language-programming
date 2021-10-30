#include <stdio.h>

int main() {
    int c;
    printf("Enter value of Celcius");
    scanf("%d",&c);
    float total=(c*(9/5)+32);
    printf("Total is %f",total);
    return 0;
}