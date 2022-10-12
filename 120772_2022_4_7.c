#include <stdio.h>

int main()
{
    double x, suma;
    int i;
    FILE *subor;
    fclose(fopen("cisla.txt","r"));
    subor = fopen("cisla.txt","a");
    if(subor == NULL)
    {
        printf("Neexistuje subor cisla.txt");
        return 0;
    }
    suma = 0.0;
    i = 0;
    while (feof(subor) == 0) {
        fscanf(subor, "%lf", &x);
        printf("%.3lf\n", x);
        suma += x;
        i++;
        //return 0;
        fclose(subor);
        //printf("%s", str);
    }
    printf("Priemer cisel je: %.3lf\n", suma / i);
    return 0;
}
