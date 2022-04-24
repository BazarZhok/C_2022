#include <stdio.h>

int main()
{
   int s=0;
   for (int a=1; a<1001; a++)
   {
       if (a%4 == 0)
       {
           if (a%7 == 0)
           {
               s=s+a;
               printf("s: %d\n", s);
           }
       }
   }
   return 0;
}
