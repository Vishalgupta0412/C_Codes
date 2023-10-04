#include <stdio.h>
int main()
{
  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
  {
      f=f*i;
      printf("%d*%d= \n",i,f);
  }
  printf("The Factorial of %d is: %d\n",num,f);
}
