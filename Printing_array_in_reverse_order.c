// printing array in reverse order
#include <stdio.h>

int main()
{
    int a[]={34,45,75,44,58,73};
    for (int i =5; i>=0 ; i--) { // it will run from 5 to till 0 that y n-1 =6-1=5
        printf("%d ",a[i]);
    }
    return 0;
}
