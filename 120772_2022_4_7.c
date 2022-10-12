#include <stdio.h>

int main()
{
    FILE *subor;
    char s;
    double x;
    int i;
    //fclose(fopen("cisla.txt","r"));
    subor = fopen("cisla.txt","r");
    if(subor == NULL)
    {
        printf("Neexistuje subor cisla.txt");
        return 0;
        //exit();
    }
    do
    {
        s = getc(subor);
        printf("%c",s);
        //i = getc(subor);
        x ++;
        
    } while (s!=EOF);
    fclose(subor);
    //printf("%lf \n",x);
    //printf("%d",x);
    //getch();
    
}
    

