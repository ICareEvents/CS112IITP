#include<stdio.h>
#include<stdlib.h>
int Max(int *arr, int n);
void main() 
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr=(int *)malloc(n*sizeof(int)); //Allocating memory dynamically
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    for(i=0;i<n;i++) //Rearranging the array
    {
        if((2*i+1)<n) 
        {
            int m=arr[i];
            arr[i]=arr[2*i+1];
            arr[2*i+1]=m;
        }
        if((2*i+2)<n) 
        {
            int m=arr[i];
            arr[i]=arr[2*i+2];
            arr[2*i+2]=m;
       }
    }
    printf("Output array: ");
    for(i=0;i<n;i++)
    printf("%d ", arr[i]);
    printf("\n");
    int max=Max(arr, n); //Function to find the maximum element in O(1) time complexity
    printf("Maximum element: %d\n", max);
    free(arr); //Deallocating dynamic memory
}
int Max(int *arr, int n) 
{
    int max=arr[0];
    int i;
    for(i=1;i<n;i++) 
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}