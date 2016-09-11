/*prog to find roots of equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2,rr,ir;
    printf("Enter the coefficients \n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
          {
            printf("roots are real and equal \n");
            r1=-b/(2*a);
            r2=r1;
            printf("the roots are r1=r2= %f \n",r1);
          }
    if
}
