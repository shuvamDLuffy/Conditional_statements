#include <stdio.h>

int main()
{
    long int m;
    printf("Enter a value = ");
    scanf("%d",&m);

    if(m>0) printf("1\n");
    if(m==0) printf("0\n");
    if(m<0) printf("-1\n");
    return 0;
}
