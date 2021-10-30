// gets() is used when then are multi space 
// put() act similar to printf but it will prinnt and cursor move to next Line

#include <stdio.h>

int main(){
    char a[70];
    printf("Enter your name :");
    gets(a); // it act as similar to scanf for taking input and advantage of gets is it will allow to print space also but scnaf wont allow for String
  
  
  
    puts(a); // it will act like printf but it will printf but it will print total in next line whta user enter fot ptint ...
    
    
    return 0;
}