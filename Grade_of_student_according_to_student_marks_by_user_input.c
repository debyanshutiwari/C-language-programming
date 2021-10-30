#include<stdio.h>
int main(){
    int a;
    printf("enter the marks");
    scanf("%d\n",&a);
    if(a>=90){
        printf("A grade");
        
        
    }
    else if(a>=80 && a<=90){
        printf("B grade");
    }
    else if(a>=70 && a<=80){
        printf("C grade");
    }
    else if(a>=60 && a<=70){
        printf("D grade");
    }
    else if(a>=50 && a<=60){
        printf("E grade");
    }
    else if(a<=40 ){
        printf("Failed");
    }
    return 0;
    
}
