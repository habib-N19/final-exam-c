#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int t;

    scanf("%d",&t);
    if (t<0 && t<100000)
    {
        return 1;
    }
    for (int i = 0; i < t; i++)
    {
    

long long int mul;
scanf("%lld", &mul);
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
long long int mul1 = a* b * c;
if (mul % mul1 == 0 )
{
    long long int d = mul / mul1;
    printf("%lld\n", d);
   
}else{
    printf("-1\n");
}


    }
    
   
    return 0;
}
