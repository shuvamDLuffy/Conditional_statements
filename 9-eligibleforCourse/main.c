#include <stdio.h>

int main()
{
    int eligible,phy,math,chy;
    printf("Enter your marks in math= ");
    scanf("%f",&math);

    printf("Enter your marks in physics= ");
    scanf("%f",&phy);

    printf("Enter your marks in chemistry= ");
    scanf("%f",&chy);

   int mathandphy = math + phy;
    int mathandchy = math + chy;
    if((math>=65 && phy>=55 && chy >= 50) || (mathandchy>=140) || (mathandphy>=140) )
    {
        printf("You are eligible\n");
    }

    else printf("You are not eligible\n");
}
