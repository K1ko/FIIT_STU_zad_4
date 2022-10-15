#include <stdio.h>

int main(){
    FILE *subor;
    FILE *s;
    char ch,c,vypis;
    subor =fopen("znaky.txt","r"); //otvorenie prvého súboru na čítanie
    s = fopen("novy.txt","w");  //otvorenie druhého súboru na zápis
    scanf("%c",&ch); //načítanie charakteru
    //printf("%c",ch);
    //c = fgetc(subor);
    while((c=fgetc(subor)) != EOF){ //čítanie súboru
        if(ch =='s'){ //ak je zadaný znak rovný 's' , prekopíruje sa obsah prvého súboru do druhého
            putc(c,s);
        }
        else{
            putchar(c); //ak je znak rôzny od 's' , obsah súboru sa vypíše na obrazovku
        }
    }
    fclose(subor); //zatvorenie prvého súboru
    fclose(s);  //zatvorenie druhého súboru
    return 0;
}