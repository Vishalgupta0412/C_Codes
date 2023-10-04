#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,posvalue,negvalue;
printf("enter 3 variable :\n");
scanf("%f%f%f",&a,&b,&c);

posvalue=(-b+ sqrt(b*b-4.0*a*c))/2.0*a;
negvalue=(-b- sqrt(b*b-4.0*a*c))/2.0*a;


printf("posvalue is %f \n",posvalue);
printf("negvalue is %f \n",negvalue);

if(posvalue>=0 && negvalue>=0)
{
    printf("Real no \n");
}
else if(posvalue<0 && negvalue<0)
{
    printf("Imaginary No \n");
}
else
{
    printf("complex No \n");
}

return 0;
}