// gets() is used when then are multi space 

#include <stdio.h>

int main(){
    
    
   
   char a[34];
   printf("Enter yoyr 0");
  gets(a); // inplace of scanf we will use gets() for taking input
   printf("%s",a);
   return 0;
}