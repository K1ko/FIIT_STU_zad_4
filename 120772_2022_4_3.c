#include <stdio.h>

long reverzne_cislo(long x)
{
    long reversed = 0,original;
    original = x;
    while (original != 0)
    {
        reversed *=10;
        reversed +=original %10;
        original /=10;
    }
    return reversed;
}

int main()
{
   long x,reversed = 0,original;
    while(scanf("%ld",&x)>=1)
    {
        if(reverzne_cislo(x)==x)
        {
            printf("%ld\n",reverzne_cislo(x));
            printf("Cislo %ld je palindrom. \n",x);
        }
        else{
            printf("%ld\n",reverzne_cislo(x));
            printf("Cislo %ld nie je palindrom. \n",x);
        }
    }
    return 0;
}