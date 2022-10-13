#include <stdio.h>

int main()
{
    FILE *subor;
    char s;
    double x;
    double sucet;
    
    //fclose(fopen("cisla.txt","r"));
    subor = fopen("cisla.txt","r");
    if(subor == NULL)
    {
        printf("Neexistuje subor cisla.txt");
        return 0;
        //exit();
    }
    while(fscanf(subor,"%lf",&x)!=EOF){
        printf("%.2lf\n",x);
        sucet += x;
    }
    printf("sucet je %.2lf",sucet);
    fclose(subor);
    return 0;
}
    /*
    do
    {
        s = fscanf(subor ,"%lf",&x);
        //printf("%.2lf\n",x);
        //i = getc(subor);
        //x ++;

        sucet +=x;
        //i++;
       printf("%.2lf\n",x); 
    } while (s!=EOF);
    printf("sucet cisel je %.2lf",sucet);
    fclose(subor);
    //printf("%lf \n",x);
    //printf("%d",x);
    //getch();
    
}
    */

