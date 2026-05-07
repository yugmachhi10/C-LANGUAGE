#include<stdio.h>
void temp(){
    int c; int f;
    printf("Enter the value of temperature in degree");
    scanf("%d",&c);

    f=c*(9/5)+32;

    printf("The temperature is %d \n",f);
}
int main (){
    for(int i=0;i<4;i++)
    temp();
return 0;
}