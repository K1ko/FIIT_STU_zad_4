#include <stdio.h>

int main(){
    float x;
    FILE *subor; //vytvorenie premennej na otvorenie súboru
    scanf("%f",&x); //načítanie čísla na výpis
    subor = fopen("nasobky.txt","w"); //otvorenie súboru na písanie
    for(int i = 1;i <=10;i++) // cyklus na výpis násobkov
    {
        fprintf(subor,"%d * %.2f = %.2f \n",i,x,i*x); // zapísanie násobkov do súboru

    }
    fclose(subor); //zatvorenie súboru
    return 0;
}