#include <stdio.h>

int main()
{
    int year;
    int count;
    begin:
    printf("Entera year=");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0) count=0;
    if (year%100==0) count=1;
    if(year%400==0) count =0;
    switch(count)
    {
        case 0:  printf("it is a leap year.");break;
        case 1:  printf("It is not a leap year.");break;
    }
    printf("\n");
    goto begin;
    return 0;
}
