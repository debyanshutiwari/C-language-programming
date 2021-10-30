// pointer which store the address of other variable
#include <stdio.h>

int main()
{
    int i=10;
    int *j=&i;
    printf("the value of i is %d\n",i);// it will give valuer of i
    printf("the value of i is %d\n",*j);// it will give valuer of i
    printf("the address of i is %u\n",&i); // it wii give address of i// it wii give address of i
    printf("the address of i is %u\n",j);// it wii give address of i

    return 0;
}
