#include<stdio.h>
int main()
{
    int n,count=0,num1=0,num2=1,next;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    printf("Fibonacci sieres\n");
    while(count<n)
    {
        printf("%d",num1);
        next=num1 + num2;
        num1= num2;
        num2= next;
        count++;
    }
}
