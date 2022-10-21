# include<stdio.h>
int main()
{
 int i,size;
 int sum=0;
 
 printf("Enter size of array\n");
 scanf("%d",&size);
 int a[size];
 printf("Enter elements of Array\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
  sum+=a[i];
 }
 printf("Sum of elements of array=%d\n",sum);
}
