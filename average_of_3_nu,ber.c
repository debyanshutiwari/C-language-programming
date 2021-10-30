// average of 3 no. using function

#include<stdio.h>

int sum(int a,int b,int c);
int main(){
    
    int a,b,c; // this a,b,c are different from int sum a,b,c 
    printf("enter a value of a");
    scanf("%d\n",&a);
    printf("enter a value of b");
    scanf("%d\n",&b);
    printf("enter a value of c");
    scanf("%d\n",&c);
    printf("The average  is %d",sum(a,b,c));
    return 0;
}
int sum(int a,int b,int c){
    int result;
    result=(a+b+c)/3;
    return result;
}