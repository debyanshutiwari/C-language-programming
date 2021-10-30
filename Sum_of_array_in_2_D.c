#include<stdio.h>
int main(){
   int a[3][2]={{1,2},
   {4,5},
   {7,8}};
   int sum=0;
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
          sum=sum+a[i][j];
      }
      printf("%d ",sum);
      sum=0;// because when once for loop will exexcute it will count sum of 1t row then again it will start from 0sum only
  }
   return 0;
}