#include<stdio.h>

int main()
{
  float s,e,i,sum=0;
  float average;
  printf("enter s & e :\n");
  scanf("%f%f",&s,&e);

  for(i=s; i<=e; i++)
  {
    
  // printf("sum=%.1f + %.1f= ",sum,i);
    sum=sum+i;
    //printf("%f \n",sum);
  }
  printf("sum :%.1f \n",sum);
  {
    average=sum/(i-1.0);
  }
  printf("average :%.1f \n",average);

  return 0;
}