#include <stdio.h>

int main() {
   int a,b;
   printf("enter a number");
   scanf("%d",&a);
   if(a%2==0){
       printf("%d it is even",a);
   }
   else{
       printf("%d is odd",a);
   }
    
    return 0;
}
