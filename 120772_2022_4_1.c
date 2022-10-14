#include <stdio.h>


int zisti_prvocislo(int cislo){
    int c ;
    if (cislo <= 1) return 0; // zabezpečenie pre 0 a 1
    for(int i = 2; i <= cislo/2;i++){ //cyklus cez čísla
        if (cislo % i == 0 ){   //ak je zvyšok po delení rovný nule
            return -1;  // číslo nie je prvočíslo , return -1;
        }      
    }
    return 1;   // ak je číslo prvočíslo , return 1; 
}
int main(void){
    int c1,c2;
    int c;
    scanf("%d %d",&c1,&c2); // načítanie čísel intervalu
    for(int j = c1; j <= c2;j++) // iterovanie v intervale
    {
        c = zisti_prvocislo(j); // do premennej c prirad return -1 || return 1
        if(c ==1){ // ak sme pri returne dostali 1 , číslo je prvočíslo
            printf("%d\n",j); // vypíše sa na obrazovku
        }
        else {printf("Prvocislo neexistuje!");return 0;} // ak sme dostali -1 , číslo nie je prvočíslo a program skončí
    }
    zisti_prvocislo(11); // skušobná funkcia na overenie čísla

}
