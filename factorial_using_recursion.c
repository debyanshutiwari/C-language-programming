// factorial programm
#include <stdio.h>
int factorial(int x);
int main()
{
    int c;
    c=factorial(5); // put anyvalue in place of 5
    printf("%d\n",c);

    return 0;
}
int factorial(int x){
    if(x==1||x==0){
        return 1;
    }
    else{
        return factorial(x-1)*x; // factorial formula is fact(x-1)*x;
    }
}
