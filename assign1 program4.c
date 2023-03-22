#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i=0, ele=0, flag=1; 
    printf("enter array elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to search: ");
    scanf("%d", &ele);
    
    for(i=0; i<10; i++)
    {
        if(a[i]==ele)  
        {
            flag=0;
            break;
        }
    }
    if(flag==0) 
        printf("element found");
    else
        printf("element not found");
    return 0;
}
