#include <stdio.h>

int main()
{
    int absissa,ordinate;
    printf("Enter x-coordinate= ");
    scanf("%d",&absissa);

    printf("Enter y-coordinate= ");
    scanf("%d",&ordinate);

    if(absissa>=0 && ordinate>=0) printf("The given coordinate(%d,%d) lies in first quadrant.\n",absissa,ordinate);
    if(absissa<0 && ordinate>=0) printf("The given coordinate(%d,%d) lies in second quadrant.\n",absissa,ordinate);
     if(absissa<0 && ordinate<0) printf("The given coordinate(%d,%d) lies in third quadrant.\n",absissa,ordinate);
     if(absissa>=0 && ordinate<0) printf("The given coordinate(%d,%d) lies in fourth quadrant.\n",absissa,ordinate);
     return 0;

}
