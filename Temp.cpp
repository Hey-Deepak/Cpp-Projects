#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,r,t,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    n=t;// obtaining the original value of n
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);   
        printf("\n %d",sum);    
        n/=10;
    }
    if(sum==t)//n becomes 0 so we are checking for t
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
    return 0;
}