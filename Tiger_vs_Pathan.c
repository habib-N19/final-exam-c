#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t;
       scanf("%d",&t);
       if (t<0 && t<1000)
       {
           return 1;
       }
       for (int i = 0; i < t; i++)
       {
        int n;
        scanf("%d", &n);
        char str[n+1];
        scanf("%s", str);
        int pathaan = 0;
        int tiger = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'P')
            {
                pathaan++;
            }
            else if (str[j] == 'T')
            {
                tiger++;
            }
        }

       
         if (tiger>pathaan)
         {
              printf("Tiger\n");
         }
         else if (pathaan>tiger)
         {
              printf("Pathaan\n");
         }
         else
         {
              printf("Draw\n");
         }
       }
     
         
    return 0;
}