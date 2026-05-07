#include<stdio.h>
int main()
{
    int arr[5];
    int *p;
    int i, largest, smallest;
    printf("Enter 5 numbers: \n");
    for(i=0; i<5; i ++){
        scanf("%d", &arr[i]);
    }
    p = arr;
    largest = smallest = *p;
    for(i=0;i<5;i++){
        if(*(p+i) > largest)
            largest = *(p + i);
        if(*(p + i) < smallest)
            smallest = *(p + i);
    }
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);
    return 0;
}
