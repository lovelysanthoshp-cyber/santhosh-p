#include<stdio.h>
int main()
{
    int i,n=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}    
