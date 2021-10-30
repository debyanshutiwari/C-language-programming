#include<stdio.h>
#include<math.h> // math.h is used for expontental ,power,squareroot etc

int main(){
    int side;
    printf("Enter side value\n");
    
    scanf("%d\n",&side);
    
    printf("%f\n",pow(side,2));
    
    return 0;
}