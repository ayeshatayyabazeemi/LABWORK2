#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for (int a=0;a<num*2;a++){
      if ( a%2!=0){
        printf("%d ", a);
        sum+=a;
      }
    }
       
    printf("\nsum is: ");
    printf("%d\n",sum);
    int price[4]={1,2,3,4};
    for (int a=0;a<4;a++){
        printf("%d\n",price[a]);
    }
   
    int mat[2][3]={{1,2,3},{4,5,6}};
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("%d\n",mat[i][j]);
        }
    }
    return 0;
}