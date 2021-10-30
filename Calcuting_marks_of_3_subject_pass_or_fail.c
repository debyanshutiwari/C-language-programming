#include <stdio.h>

int main() {
    int maths,physic,chemistry;
    printf("Enter marks of maths\n");
    scanf("%d\n",&maths);
    printf("Enter marks of physic\n");
    scanf("%d\n",&physic);
    printf("Enter marks of chemistry\n");
    scanf("%d\n",&chemistry);
    float total=(maths+phy+che)/3;
    if((total<40) || maths<33 || physic <33 || chemistry<33){
        printf("You are fail %f",total);
    }
    else{
        printf("You are pass %f",total);
    }
    
    
    return 0;
}