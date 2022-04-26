#include <stdio.h>

int main()
{
    int a, b, i;
    FILE *t;
    t = fopen("output","w");
    printf("A and B: ");
    scanf("%d %d", &a, &b);
        {
        for (int i=a; a<=b; a++)
            {
            int c;
            for(c=1; c<=b; c++)
                {
                    t = fopen("output","r");
                    fscanf(t, "%d %d",&c , &a);
                    printf("%d. %d\n", c, a);
                }
            }
        }
fclose(t);

return 0;
}
