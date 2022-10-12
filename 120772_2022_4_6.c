#include <stdio.h>

int main(){
    float x;
    FILE *subor;
    scanf("%f",&x);
    fclose(fopen("nasobky.txt","w"));
    subor = fopen("nasobky.txt","a"); 
    for(int i = 1;i <=10;i++)
    {
        fprintf(subor,"%d * %.2f = %.2f \n",i,x,i*x);

    }
    fclose(subor);
    return 0;
}