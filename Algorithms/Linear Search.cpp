//C program to search element in an array

#include<stdio.h>
  
int main()
{
    int x, n;
    printf("Enter the elements of array? \n");
    scanf("%d",&n);
     
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; ++i)
        scanf("%d",&arr[i]);
     
    printf("Enter element to be searched:\n");
    scanf("%d",&x);
     
    int ans=-1;
    int flag=0;
    for(int i=0;i<n;++i){
        if(arr[i]==x){
            ans=i;
            flag=1;
            break;
        }
    }
     
    if(flag==1)
        printf("Element found at index %d",ans);
    else
        printf("Element not found");
  
    return 0;
}
