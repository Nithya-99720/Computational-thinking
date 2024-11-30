#include<stdio.h>
int main()
{
int n,s,i,arr[10];
printf("Enter how many elements need\n");
scanf("%d",&n);
printf("Enter n array elements\n");


  for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   
   printf("Enter element to be searched");
   scanf("%d",&s);
   
   for(i=0;i<=n;i++)
   
   if(arr[i]==s)
         break;
   
    if(i<n){
   printf("Entered element is present in arr[%d]",i);
   
   }
    else{
   printf("Entered element is not found");
   }
}
