#include<stdio.h>
#include<string.h>
int search(int m, int n, char a[m] [n], char *k)
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
   int n,m;
    char a[100][100],ele[100]
   
