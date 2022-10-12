#include <stdio.h>

int cifry(int cislo)
{
    if(cislo !=0)
    {
       return (cislo % 10 + cifry(cislo /10));
    //return 0; 
    }
    return 0; 
}
int main(){
    int cislo,vysledok;
    scanf("%d",&cislo);
    vysledok =cifry(cislo);
    printf("%d",vysledok);
    return 0 ;
}