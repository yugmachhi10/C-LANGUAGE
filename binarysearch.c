//write a program for binary search an element in an array


#include<stdio.h>

int main() {
int c,first,last ,middle,n,search,array[100];

printf("Enter the number of elements \n");
scanf("%d",&n);

printf("Enter the %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);

printf("Enter value to search");
scanf("%d",&search);

first =0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
          if(array[middle]<search)
              first=middle +1;
          else if(array[middle]==search)
            {
                              printf("%d found at loaction %d.\n",search,middle+1);
                              break;
              }
        else
        last = middle-1;
        middle = (first + last)/2;
}
                    if (first > last)
                          printf("Not found at %d isnt present in the list\n",search);
         
               
return 0;
}

/* Output
code by Yug
Enter the number of elements
6    
Enter the 6 integers
12
14
67
78
89
99
Enter value to search67
67 found at loaction 3. */
