#include <stdio.h>

int sum (int a,int b); // sum is fuction and it is taking 2 value a and b

int main()
{
    int c; // to store sum value 
    c=sum(2,5);
   printf("%d\n",c);
    return 0;
}

int sum(int a,int b){
    int result=a+b;
   // result=a+b;
    return result;
}