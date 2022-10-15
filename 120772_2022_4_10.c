#include <stdio.h>

int main()
{
FILE *subor;
FILE *subor1;
char c,c1;
int d = 0,d1 = 0,p_r=0;
int sum = 0;
subor = fopen("prvy.txt","r"); //otvorenie súboru na čítanie
subor1 = fopen("druhy.txt","r"); //otvorenie súboru na čítanie
while((c =fgetc(subor)) != EOF){d++;} //cyklus na dĺžku prvého súboru
while((c1 =fgetc(subor1)) !=EOF){d1++;} // cyklus na dĺžku druhého súboru
rewind(subor); // znovuotvorenie prvého súboru
rewind(subor1); // znovuotvorenie druhého súboru
while(((c =fgetc(subor)) !=EOF) && (c1 =fgetc(subor1)) !=EOF) // cyklus až pokým sa nepríde na koniec súborov
{
    
    if(c != c1) //ak sa nájde rozdielny znak , pripočíta sa ku premennej počet rozdielnych
        p_r++;
}
if(p_r ==0) //ak nie sú v súboroch žiadne rozlišné znaky
    printf("Súbory sú identické. \n");
if (p_r !=0) //ak sú v súbore rozdielne znaky , vypíše sa ich počet
    printf("Počet rôznych znakov: %d . \n",p_r);
if(d > d1) //ak je prvý súbor dlhší od druhého 
    sum = d-d1; //vypíše sa o kolko
if(d1 > d) //ak je druhý súbor dlhší od prvého
    sum = d1 -d; //vypíše sa o kolko
if(d != d1) //ak sa dĺžky súborov nerovnajú , vypíše sa o kolko znakov sa líšia
    printf("Jeden zo suborov je dlhší o %d znakov.\n",sum);

fclose(subor); //zatvorenie prvého súboru
fclose(subor1); //zatvorenie druhého súboru

return 0;

}