#include <stdio.h>

int main(){
    FILE *subor;
    FILE *s;
    char ch,c,vypis;
    subor =fopen("znaky.txt","r");
    s = fopen("novy.txt","w");
    scanf("%c",&ch);
    //printf("%c",ch);
    //c = fgetc(subor);
    while((c=fgetc(subor)) != EOF){
        if(ch =='s'){
            putc(c,subor);
        }
        else{
            putchar(c);
        }
    }
    fclose(subor);
    fclose(s);
    return 0;
}