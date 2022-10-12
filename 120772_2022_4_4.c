#include <stdio.h>

int rekurzia(int n){
    if(n<= 1)
        return n;
    if(n%2 !=0)
        return n + (rekurzia(n-1));
    return(rekurzia(n-1));
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",rekurzia(n-1));
    return 0;
}