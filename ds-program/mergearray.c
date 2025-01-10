
#include <stdio.h>
int main()
{
    int a[50],b[50],c[50],i,n,m,k,j;
    
    printf("enter the limit of first array");
    scanf("%d",&m);
    
    
    printf("enter the elements of first array");
    
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    
    printf("enter the limit of second array");
    scanf("%d",&n);
    
    printf("enter the elements of second array");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    i=0;
    k=0;
    j=0;
    
    
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    
    while(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
        
    }
    printf("the merged array : ");
    
    for(i=0;i<m+n;i++)
    {
        printf("%d",c[i]);
    }
}




