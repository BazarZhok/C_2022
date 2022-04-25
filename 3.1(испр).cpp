#include <stdio.h>

int main()
{
   int a, b, i;
   FILE *t;
   t = fopen("output","w");
   
   printf("A and B: ");
   scanf("%d %d", &a, &b);
   printf("A: %d\nB: %d\n", a, b);
    {
        int s;
        for (int i=a; a<=b; a++)
        {
            s=a*3;
            {
                fprintf(t, "s: %d\n", s);
            }
        }
    }     

   fclose(t);

   return 0;
}
