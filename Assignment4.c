#include<stdio.h> //Program to return ith digit and checking pallindrome
int findDigit(int x,int i) 
{
    int l=0,t=x; //l=length of the integer
    while (t!=0) 
    {
        l++;
        t/=10;
    }//if i is greater than the length of x, return -1
    if (i>l) 
    return -1;
    int j;//finding ith least significant digit of x
    for (j=1;j<=i;j++) 
    {
        if (j==i)
        return x%10;
        x/=10;
    }
}
int palindrome(int x) 
{
    int l=0,t=x;
    while (t!=0) 
    {
        l++;
        t/=10;
    }
    int i,j;
    for (i=1,j=l;i<=j;i++,j--)//comparing ith and jth digits
    {
        if (findDigit(x,i)!=findDigit(x,j)) 
        return 0;//for not a palindrome number
    }
    return 1;//for a palindrome number
}
void main() 
{
    int x,i,d,p;
    printf("Enter an integer: ");
    scanf("%d",&x);
    printf("Enter the value of i: ");
    scanf("%d",&i);
    d=findDigit(x,i);
    if(d==-1) 
    printf("-1\n");//The decimal representation of x needs less than %d digits
    else
    printf("The least significant digit of %d is %d.\n",x,d);
    p=palindrome(x);
    if(p==1) 
    printf("%d is a palindrome\n",x);
    else
    printf("%d is not a palindrome\n",x);
}