  #include <stdio.h>
  int reverse(int a)
  int main()
   {
  
      int num,x,temp;
      printf("enter number to be reversed \n");
      scanf("%d",&num);
      temp=num;
      x=reverse(num);
      printf("\n Reverse is %d \n",x);
      if(x==temp)
          {
          printf(" %d is a palindrome",temp);
          }
      else
          {
          printf("%d is not  palindrome",temp);
          }
      return 0;
   }
  int reverse(int a)
   {
       int rev=0;
       while(a!=0)
       {
           rev=(rev*10)+(a%10);
           a=a/10;
       }
       return rev;
    };
