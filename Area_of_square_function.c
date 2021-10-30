#include<stdio.h>
int  area(int a);
int main(){
    int c=area(7);
    printf("%d\n",c);
    return 0;
}
int  area(int a){
    int area=a*a;
    return area;
}