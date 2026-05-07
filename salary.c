#include <stdio.h>
int main(){
float base,da,hra,salary;

printf("Enter your base salary");
scanf("%f",&base);
da=base*0.5;
hra=base*0.2;

salary=base=da=hra;
printf("Your total salary is %.2f",salary);
return 0;
}
/*code by yug
Enter your base salary2000
Your total salary is 400.00
*/