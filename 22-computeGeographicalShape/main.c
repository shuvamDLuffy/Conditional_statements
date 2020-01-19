#include <stdio.h>
#define  pi 3.1415
void main ()
{

      int choice,length,radious,w,b,h;
      float area;

      printf("1. Square\n");
      printf("2. Triangle\n");
      printf("3. Circle\n");
      printf("4. Quit");
      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("Type the length of the side of a Square : ");
                 scanf("%d",&length);
                 area=length*length;
                 break;

            case 2:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=0.5*b*h;
                  break;

             case 3:
                    printf("Enter the area of  a circle : ");
                    scanf("%d",&radious);
                    area=pi*radious*radious;
                    break;

              case 4:

                    break;

          }
          printf("The area is : %f\n",area);

}
