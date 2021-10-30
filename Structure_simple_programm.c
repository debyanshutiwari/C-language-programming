
#include <stdio.h>
#include<string.h>

struct emplyee{
    int code;
    float salary;
    char name[9];
};
int main()
{
   struct emplyee e1;
   e1.code=4720;
   e1.salary=456210.45;
   strcpy(e1.name,"mohan");
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%f\n",e1.salary);
}