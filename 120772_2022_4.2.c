#include <stdio.h>

double tyzdenna_mzda(double h_mzda,double hod)
{
    double spolu=0;
        spolu = h_mzda*hod; //výpočet mzdy za  odpracovane hodiny
        printf("Hod.mzda: %.2lf Euro/hod,hodin %.2lf, spolu %.2lf Euro \n",h_mzda,hod,spolu);
        return spolu;

        
}

int main()
{
    int p_v; //pocet vstupov
    double mzda,hod;
    double sucet = 0;
    scanf("%d",&p_v); //načítanie počtu vstupov [kolkokrát sa má funkcia zopakovat]
    for(int i = 0;i < p_v;i++ ) //počet opakovaní funckie 
    {
        scanf("%lf %lf",&mzda,&hod); //načítanie euro/hod
        sucet +=tyzdenna_mzda(mzda,hod); // spočítavanie jednotlivých hodnot euro/hod
    }
    printf("Celkova mzda: %.2lf Euro",sucet); // vypísanie celkovej mzdy za načítané vstupy
    return 0;

}
