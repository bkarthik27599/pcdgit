#include<stdio.h>
#include<string.h>
int search(int m, char a[] [], char *k)
  {
   int left=0;
   int right=n-1;
   int t, mid;
   while(left<right)
     {
      mid=(left+right) /2;
      t=strcmp(k, a[mid]) ;
      if(t>0)
        {
         left=mid+1;
        } 
      else if(t<0)
        {
         right=mid-1;
        } 
      else
        {
         return mid;
        } 
     } 
   return - 1;
  } 
int main() 
  {
   int n, x;
   char a[100][100],ele[100];
   printf("Enter the number of names in the list\t") ;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
      {
        printf("\n Enter the name\t");
        scanf("%s", a[i]) ;
      } 
   printf("\nEnter the name to be searched \t") ;
   scanf("%s", & ele) ;
   x=search(n, a, *ele) ;
   if(x==-1) 
      {
        Printf("\n search unsuccessful try again") ;
      } 
   else
      {
        Printf("\n%s is present at %d position", &ele, & x) ;
      } 
  return 0;
 }    
   
   
