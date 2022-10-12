#include <stdio.h>

double tyzdenna_mzda(double h_mzda,double hod)
{
    double spolu=0;
        spolu = h_mzda*hod;
        printf("Hod.mzda: %.2lf Euro/hod,hodin %.2lf, spolu %.2lf Euro \n",h_mzda,hod,spolu);
        return spolu;

        
}

int main()
{
    int p_v; //pocet vstupov
    double mzda,hod;
    double sucet = 0;
    scanf("%d",&p_v);
    for(int i = 0;i < p_v;i++ )
    {
        scanf("%lf %lf",&mzda,&hod);
        sucet +=tyzdenna_mzda(mzda,hod);
    }
    printf("Celkova mzda: %.2lf Euro",sucet);
    return 0;

}
