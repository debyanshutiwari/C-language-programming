
#include <stdio.h>

int main()
{
    FILE *ptr; // ptr is pointer 
    int number=456;
    ptr=fopen("sample.txt","w"); // it  create a new file in name of sample.txt
    
    fprintf(ptr,"the values is %d\n",number);  // fprintf is similar to  printf it will help to write inside sample.txt file
    
    
    fclose(ptr);   // necessary to close file after all thing is done
    
    return 0;
}
