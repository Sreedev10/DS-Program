#include <stdio.h>
int main()
{
    int n,i,a[50],key,flag=0;
    
    printf("enter the limit");
    scanf("%d",&n);
    
    printf("enter the elements");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    printf("enter the vlue for search");
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("search is successfull");
    }
    else
    {
        printf("no such element");
    }
}