#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);

    if(age>=18) printf("You are eligible for casting your own vote!!\n");
    else printf("You are not eligible for casting your own vote!!\n");

    return 0;
}
