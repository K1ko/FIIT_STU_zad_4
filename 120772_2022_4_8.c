#include <stdio.h>

int main(){
    FILE *subor;
    FILE *s;
    char ch,c,vypis;
    subor =fopen("znaky.txt","r");
    s = fopen("novy.txt","w");
    scanf("%c",&ch);
    //printf("%c",ch);
    c = fgetc(subor);
    while (c != EOF)
    {
        if(ch =='s'){
        fputc(c, s);
        c = fgetc(subor);}
        else{
            fscanf(subor,"%c",&vypis);
            printf("%c",vypis);
        }
    }
    fclose(subor);
    fclose(s);
    return 0;
}