//Bubble sort code


#include<stdio.h>


int main () {

 int n,j,i,swap;
 
 printf("Enter the number of elements");
 scanf ("%d",&n);
 
 int arr[n];
 printf("Enter %d integers",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
  if (arr[j]> arr[j+1])
  {
  swap = arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=swap;
  }
  }
 }
 
 printf("sorted list in ascending order is \n");
 
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
return 0;
}

/* OUTPUT
code by yug 
Enter the number of elements4
Enter 4 integers1
2
5
20
sorted list in ascending order is 
1
2
5
20*/