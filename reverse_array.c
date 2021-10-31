#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a[1000],i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);
 
   printf("the elements are:");
   for(i=0;i<n;i++){

      scanf("%d",&a[i]);
      
   }
   printf("the final elements are in reversed order are:");
   for(i=n;i>=0;i--)
   {
       printf("%d",a[i]);
       printf("\n");
   }
   return 0;
}