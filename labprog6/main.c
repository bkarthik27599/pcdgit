#include<studio.h>
int sort(int a[100],  int n) 
 {
  int temp ;
  for(int i=0;i<n;i++) 
   {
    for(int j=0;j<n;j++)
     {
      if(a[j]>a[j+1])
       {
         temp=a[j] ;
          a[j]=a[j+1];
         a[j+1]=temp;
       } 
      } 
     } 
    return a;
 } 
int main() 
 {
  int a[100],m, s[100];
  printf("enter the number of elements");
  scanf("%d", &m);
  printf("\nenter the elements\n") ;
  for(int x=0;x<m;x++)
   {
    scanf("%d\t",&a[x]) ;
   } 
  s=sort(a, m);
  for(int y=0;y<m;y++)
   {
    printf("%d", s[y];
   } 
 return 0;
 } 
