int main()
{
   int a, b, i;
   FILE *t;
   t = fopen("output","w");
   printf("A and B: ");
   scanf("%d %d", &a, &b);
   printf("A: %d\nB: %d\n", a, b);
        { 
        int i=a;    
        while (i<=b)
            {
                printf("s: %d\n", i);
            }
   a++;
        }
   fclose(t);
   
   return 0;
}
