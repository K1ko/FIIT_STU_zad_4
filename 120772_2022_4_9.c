#include <stdio.h>

int main(){
    FILE *subor;
    char c;
    int p_m = 0; // počet medzier
    subor =fopen("text.txt","r"); //otvorenie súboru

    while((c = fgetc(subor)) != EOF) //cyklus až po koniec súboru
    {
        if (c == ' ') //ak nájde medzeru , pripočíta ddo premennej počet medzier
            p_m++;
        else if(c == '#' || c == '$' || c == '&') // ak prečíta riadiaci znak , vypíše sa 
            printf("Precital som riadiaci znak\n");
        else if (c == 'x' || c == 'X') // ak prečíta x/X , vypíše sa
            printf("Precital som X\n");
        else if (c == 'y' || c == 'Y') // ak prečíta y/Y , vypíše sa 
            printf("Precital som Y\n");    
        else if (c == '*') //ak prečíta hviezdičku , program sa ukončí
        {
            printf("Koniec\n");
            printf("Počet prečítaných medzier je: %d",p_m); // výpis načítaných medzier v programe
            return 0;
        }
        
            
            
    }
    return 0;
}