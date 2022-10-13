#include <stdio.h>

int main(){
    FILE *subor;
    char c;
    int p_m = 0; // počet medzier
    subor =fopen("text.txt","r");

    while((c = fgetc(subor)) != EOF)
    {
        if (c == ' ')
            p_m++;
        else if(c == '#' || c == '$' || c == '&')
            printf("Precital som riadiaci znak\n");
        else if (c == 'x' || c == 'X')
            printf("Precital som X\n");
        else if (c == 'y' || c == 'Y')
            printf("Precital som Y\n");    
        else if (c == '*')
        {
            printf("Koniec\n");
            printf("Počet prečítaných medzier je: %d",p_m);
            return 0;
        }
        
            
            
    }
    return 0;
}