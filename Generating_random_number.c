#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    
    srand(time(0));
    
    number=rand()%100+1; // divided by 100 whatever remainder we will get it will be between 1 to 100 only 
    //generatting random number from 1 to 100 if we will not add so remainder will be till 99 only so adding 1 it will from [1,100];
    
    printf("%d\n",number);
}