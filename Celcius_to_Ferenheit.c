// celcius to Farenheit convertion;

#include <stdio.h>
int celcius(int x);
int main()
{
    int a;
    
  printf("Enter celcius values\n");
  scanf("%d\n",&a);
  
  printf("The value of Farenheit is %d\n",celcius(a)); // caling celcius function

    return 0;
}
int celcius(int x){
   int result= (x * 9/5) + 32 ;
   return result;
}
