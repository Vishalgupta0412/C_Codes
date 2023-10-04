#include<stdio.h>
int main()
{
  printf("1.Add\n");
  printf("2.substract\n");
  printf("3.multiply\n");
  printf("4.divide\n");

  int choice;
  float result=0;
  printf("enter choice:\n");
  scanf("%d",&choice);

  if(choice==1)
  {
    float a,b;
    printf("enter 2 value:\n");
    scanf("%f%f",&a,&b);
    result=a+b;
  }
  else if (choice==2)
  {
    float a,b;
    printf("enter 2 value:\n");
    scanf("%f%f",&a,&b);
    result=a-b;
  }
  else if(choice==3)
  {
    float a,b;
    printf("enter 2 value:\n");
    scanf("%f%f",&a,&b);
    result=a*b;
  }
  else if(choice==4)
  {
    float a,b;
    printf("enter 2 value:\n");
    scanf("%f%f",&a,&b);
    result=a/b;
  }
  else
  {
   printf("invalid \n"); 
  }
  printf("result :%.2f\n",result);
  return 0;
}