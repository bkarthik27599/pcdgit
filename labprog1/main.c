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
    else if(d>0)
    	 {
        	 printf ("roots are real \n");
        	 r1=(-b+sqrt(d))/(2*a);
        	 r2=(-b-sqrt(d))/(2*a);
        	 printf("roots are r1=%f, \t r2=%f",r1,r2);
    	 }
	 else
    	 {
        	 printf("roots are complex \n");
        	 rr=-b/(2*a);
        	 ir=sqrt(-d))/(2*a);
        	 printf("roots are r1=%f+%fi, \tr2=%f-%fi",rr,ir,rr,ir);
    	 }
    return 0;
}
