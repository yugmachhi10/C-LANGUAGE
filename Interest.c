#include<stdio.h>

int main(){
float a,b,c,i;

printf("Enter the Principle amount:-");
scanf("%f",&a);

printf("Enter rate of Interest:-");
scanf("%f",&b);

printf("Enter the Duration:-");
scanf("%f",&c);

i= (a*b*c)/100;
printf("Interest is: %.2f",i);

return 0;


}