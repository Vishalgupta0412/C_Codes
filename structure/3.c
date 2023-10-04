#include <stdio.h>

struct st
{
   int x;
   int y;
   int z;
   char ch;
   char chs[20];
} st1, st2;

int main()
{
   printf("Enter your name: ");
   gets(st1.chs);
   printf("Enter any three numbers: ");
   scanf("%d%d%d", &st1.x, &st1.y, &st1.z);
   printf("Press 'y' and then hit the ENTER key to see the sum: ");
   fflush(stdin);
   scanf("%c", &st1.ch);

   st2 = st1;              // assign one structure to another

   if (st2.ch == 'y' || st2.ch == 'Y')
   {
      printf("%s, the sum of three numbers is %d.", st2.chs, st2.x + st2.y + st2.z);
      return 0;
   }

   return 0;
}