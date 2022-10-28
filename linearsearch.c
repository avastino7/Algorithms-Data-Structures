#include<stdio.h>
#include<conio.h>
void main(){
    int array[100],size_of_array,i,n,flag;
    printf("Enter the size of an array");
    scanf("%d",&size_of_array);
    printf("Enter the elements of an array");
    for(i=0;i<size_of_array;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element you want to search in an array");
    scanf("%d",&n);
    i=0;
    while(i<n){
        if(array[i]==n){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
    printf("The searched element is found at the index %d",i);
    }
    else{
        printf("Element not found");
    }
}
