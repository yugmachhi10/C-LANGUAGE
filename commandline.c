#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){

    //check if the correct number of arguments are passed 
    if(argc != 4) {
        printf("Error: Invalid number of arguments.\n");
        printf("Usage:<program> <number1> <operator> <number2> \n");
        return 1;
    }

    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char op = argv [2][0];
    double  result;

    switch (op)
    {
        case'+':
        result = num1+num2;
        break;


        case'-':
        result = num1-num2;
        break;

        case'*':
        result = num1*num2;
        break;

        case'/':
        if(num2 == 0)
        printf("Error: Division by zero is not allowed \n");
        return 1;
    
        result = num1/ num2;
        break;

        default:
        printf("Error : Invalid operator '%c' \n",op);
        return 1;
    }
    //Dispaly result 
    printf("result %.2lf\n", result);
    return 0;
}