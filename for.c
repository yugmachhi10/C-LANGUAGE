#include<stdio.h>

void main() {

    int num,i;
    unsigned long long fact =1;
    printf("Enter a Number");
    scanf("%d",&num);

    if(num<=0)
    {
        printf("we cant find negative");
    }
    else{
        for(i=1;i<=num;i++)
        {
            fact = fact*i;
        
        }
        printf("fact of %d =%lu",num,fact);
    
    
    }
    }
