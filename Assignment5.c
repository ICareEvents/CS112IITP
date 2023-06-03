#include<stdio.h> //Program to find minimum and maximum elements in an array
void naiveApproach(int A[], int n)//Naive function to find the minimum and maximum elements in an array 
{
    int min=A[0],max=A[0];
    for(int i=1;i<n;i++) 
    {
        if(A[i]<min)
        min=A[i];
        if(A[i]>max)
        max=A[i];
    }
    printf("Using naive approach:\n");
    printf("The minimum element is: %d\n", min);
    printf("The maximum element is: %d\n", max);
}
int minRecursive(int A[], int n) //Recursive function to find the minimum element in an array
{
    if(n==1)
    return A[0];
    else 
    {
        int min=minRecursive(A,n-1);
        if(A[n-1]<min)
        return A[n-1];
        else
        return min;
    }
}
int maxRecursive(int A[],int n)//Recursive function to find the maximum element in an array
{
    if(n==1)
    return A[0];
    else 
    {
        int max=maxRecursive(A,n-1);
        if(A[n-1]>max)
        return A[n-1];
        else
        return max;
    }
}
void main() 
{
    int A[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++) 
    {
        printf("Enter A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    naiveApproach(A, n);
    int min=minRecursive(A, n);
    int max=maxRecursive(A, n);
    printf("Using recursive approach:\n");
    printf("The minimum element is: %d\n", min);
    printf("The maximum element is: %d\n", max);
}