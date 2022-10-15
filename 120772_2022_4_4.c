#include <stdio.h>
//súčet všetkcýh kladných nepárnych čísel väčších ako N
int rekurzia(int n){
    if(n<= 1) //ak je N záporné , program skončí a vráti iba číslo
        return n;
    if(n%2 !=0) // ak je zvyšok po delení daného čísla rôzny od 0
        return n + (rekurzia(n-1)); // funkcia vráti spočítané číslo
    return(rekurzia(n-1));
}
int main()
{
    int n;
    scanf("%d",&n); // načítanie čísla N 
    printf("%d",rekurzia(n-1)); //vypísanie návratovej hodnoty rekurzie
    return 0;
}