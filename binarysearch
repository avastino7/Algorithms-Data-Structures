#include<stdio.h>
#include<conio.h>
void main(){
    int array[10],i,n,item,low,high,mid,flag;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    low=0; //low is lowest index value of an array
    high=n-1;// high is the highest index value of an array
    printf("Enter the element to search");
    scanf("%d",&item);
    while(low<=high){
        mid=(low+high)/2;
        if(item==array[mid]){
            flag==1;
            break;
        }
        else if(item>array[mid]){
            low=mid+1;
        }
        else if(item<array[mid]){
            high=mid-1;
        }
    }
    if(flag==1){
    printf("The element if found at the index%d",mid);
    }
}
