#include <stdio.h>

int main()
{
FILE *subor;
FILE *subor1;
char c,c1;
int d = 0,d1 = 0,p_r=0;
int sum = 0;
subor = fopen("prvy.txt","r");
subor1 = fopen("druhy.txt","r");
while((c =fgetc(subor)) != EOF){d++;}
while((c1 =fgetc(subor1)) !=EOF){d1++;}
rewind(subor);
rewind(subor1);
while(((c =fgetc(subor)) !=EOF) && (c1 =fgetc(subor1)) !=EOF)
{
    
    if(c != c1)
        p_r++;
}
if(p_r ==0)
    printf("Súbory sú identické \n");
if (p_r !=0)
    printf("Počet rôznych znakov: %d \n",p_r);
if(d > d1)
    sum = d-d1;
if(d1 > d)
    sum = d1 -d;
if(d != d1)
    printf("Jeden zo suborov je dlhší o %d znakov",sum);

fclose(subor);
fclose(subor1);

return 0;

}