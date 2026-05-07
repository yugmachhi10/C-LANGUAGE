#include<stdio.h>

int main (){
int n,data=4;
int arr[]={1,2,3,4,5,6,7};



for(int i=0;i<n;i++)
{
    if (    arr[i]==data)   
    {
        printf("element found at: %d",i);
        break;
    }
}


return 0;
}

/* OUTPUT
CODE BY YUG 
element found at: 3
*/