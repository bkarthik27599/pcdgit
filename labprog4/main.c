#include<stdio. h>
float evaluate(float a[10], int n,  float x) ;
 {
  int i;
  float sum=0;
  for(i=0;i<=n;n++);
    {
     sum=(sum*x)+ a[i];
    } 
  return sum;
 } 
int main() 
 {
  float a[20],s,x;
  int n,i;
  printf("enter the degree");
  scanf("%d", & n);
  printf("\n enter the coefficients") ;
  for(i=0;i<n;i++)
    {
     printf("enter the next coefficient\n");
     scanf("%f", & a[i]) ;
    } 
  printf("enter the value of x at which polynomial has to be evaluated\n") ;
  scanf("%f", &x);
  sum= evaluate(a, n, x) ;
  printf("value of polynomial at x is %f \n", sum) ;
  return 0;
 } 
