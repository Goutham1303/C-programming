#include<stdio.h>
int main()
{
    int i,n,a[100],count=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
	{
       if(a[i]==2||a[i]==3||a[i]==7||a[i]==5)
	   {
          continue;
       }       
        else if(a[i]%2==0||a[i]%3==0||a[i]%5==0||a[i]%7==0)
		{
         count++;
        }
    }
        if(count>2)
		{    
        }
       printf("total composite number are: %d",count);
}
