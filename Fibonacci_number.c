// fibonacci number fib(n-1)+fib(n-2) important formula...

#include<stdio.h>
int fibo(int n);
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d\n",&a);
    printf("%d\n",fibo(a));
    return 0;
    
    
    
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
   
   else{
        return fibo(n-1)+fibo(n-2);
    }
}
