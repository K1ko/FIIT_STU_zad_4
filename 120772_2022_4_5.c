#include <stdio.h>
//súčet cifier čísla
int cifry(int cislo)
{
    if(cislo !=0) //ak je číslo rôzne od nuly
    {
       return (cislo % 10 + cifry(cislo /10)); // rozdelenie čísla na cifry a spočítanie
    //return 0; 
    }
    return 0; 
}
int main(){
    int cislo,vysledok;
    scanf("%d",&cislo); //načítanie čísla 
    vysledok =cifry(cislo); //spočítanie cifier
    printf("%d",vysledok); // vypísanie výsledku súčtu
    return 0 ;
}