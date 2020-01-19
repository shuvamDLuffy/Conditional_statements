#include <stdio.h>
#include <string.h>

void main()
{
    int roll,phy,math,FIT,total;
    float per;
    char name[20],div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&roll);
    printf("Input the Name of the Student :");
    scanf("%s",name);
    printf("Input  the marks of Physics, math and Fundamental of IT : ");
    scanf("%d%d%d",&phy,&math,&FIT);
    total = phy+math+FIT;
    per = total/3.0;
    if (per>=60)
     strcpy(div,"First");
    else
    if (per<60&&per>=48)
        strcpy(div,"Second");
    else
        if (per<48&&per>=36)
        strcpy(div,"Pass");
         else
        strcpy(div,"Fail");

       printf("\nRoll No : %d\nName of Student : %s\n",roll,name);
       printf("Marks in Physics : %d\nMarks in Math : %d\nMarks in Fundamental of IT : %d\n",phy,math,FIT);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
