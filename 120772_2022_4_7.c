#include <stdio.h>

int main()
{
    FILE *subor;
    char s;
    double x;
    double sucet;
    
    //fclose(fopen("cisla.txt","r"));
    subor = fopen("cisla.txt","r"); //otvorenie súboru na čítanie 
    if(subor == NULL) //ošetrenie v prípade neotvorenia súboru
    {
        printf("Neexistuje subor cisla.txt");
        return 0;
        //exit();
    }
    while(fscanf(subor,"%lf",&x)!=EOF){ //čítanie čísel zo súboru až pokým sa nenájde koniec súboru
        printf("%.2lf\n",x); //vypisovanie čísel na obrazovku
        sucet += x; // pripočítavanie čísel zo súboru do premennej súčet
    }
    printf("sucet je %.2lf",sucet); //výpis súčtu čísel zo súboru
    fclose(subor); //zatvorenie súboru
    return 0;
}

