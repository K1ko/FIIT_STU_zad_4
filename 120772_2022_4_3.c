#include <stdio.h>

long reverzne_cislo(long x)
{
    long reversed = 0,original;
    original = x; // načítané číslo , ktoré zistujeme či je palindromom
    while (original != 0)
    {
        reversed *=10; //otočené číslo ku originálnemu uložené v premennej reversed
        reversed +=original %10;
        original /=10;
    }
    return reversed;
}

int main()
{
   long x,reversed = 0,original;
    while(scanf("%ld",&x)>=1) //ošetrenie pre počet čísel na vstupe návratovou hodnotou scanf
    {
        if(reverzne_cislo(x)==x) // ak číslo je rovné pôvodnému číslu
        {
            printf("%ld\n",reverzne_cislo(x)); //číslo je palindrom
            printf("Cislo %ld je palindrom. \n",x);
        }
        else{
            printf("%ld\n",reverzne_cislo(x)); // číslo nie je palindrom
            printf("Cislo %ld nie je palindrom. \n",x);
        }
    }
    return 0;
}