#include<stdio.h>
#include<stdlib.h>

int main (){
int *arr;
int n,newSize,i;

//accept the initila size of the array 
printf("Enter the initial number of elements :");
scanf("%d",&n);

//dynamic memeory allocation useing malloc
arr=(int*)malloc(n*sizeof(int));

if(arr==NULL){
   printf("Memory not allocated \n:");
   return 1;
}

// print the array
printf("Enter %d element\n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
 // Ask new value for resizeng 
 printf("Enter the new size for the array");
 scanf("%d",&newSize);

 // reallocate memory using realloc
 arr=(int*)realloc(arr,newSize* sizeof(int));

 if(arr==NULL){
    printf("Memory realloaction failed \n");
    return 1;
 }

 //for expanded part,if newsize>n,ask more values 
 if(newSize>n){
    printf("Enter %d more elements \n", newSize-n);
    for(i=n;i<newSize;i++){
        scanf("%d",&arr[i]);
    }
 }

 // display array elements
 printf("Array elements \n");
 for(i=0;i<newSize;i++){
    printf("%d ",arr[i]);
 }

 //free memory
 free(arr);
}
/*OUTPUT
Code by yug
Enter the initial number of elements :4
Enter 4 element
2
4
3
5
Enter the new size for the array6
Enter 2 more elements 
34
67
Array elements 
2 4 3 5 34 67*/