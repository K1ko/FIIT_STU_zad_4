#include <stdio.h>


int zisti_prvocislo(int cislo){
    int c ;
    if (cislo <= 1) return 0; // zabezpečenie pre 0 a 1
    for(int i = 2; i <= cislo/2;i++){
        if (cislo % i == 0 ){
            return -1;
        }      
    }
    return 1;
}
int main(void){
    int c1,c2;
    int c;
    scanf("%d %d",&c1,&c2);
    for(int j = c1; j <= c2;j++) // iterovanie v intervale
    {
        c = zisti_prvocislo(j);
        if(c ==1){
            printf("%d\n",j);
        }
        else {printf("Prvocislo neexistuje!");return 0;}
    }
    zisti_prvocislo(11); // skušobná funkcia na overenie čísla

}
