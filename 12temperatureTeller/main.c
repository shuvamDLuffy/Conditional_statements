#include <stdio.h>
void main()
{
     int tmpr;

    printf("Input days temperature : ");
    scanf("%d",&tmpr);
   if(tmpr<0)
             printf("Freezing weather.\n");
   else if(tmpr<10)
            printf("Very cold weather.\n");
            else if(tmpr<20)
                        printf("Cold weather.\n");
                    else if(tmpr<30)
                               printf("Normal in temp.\n");
                            else if(tmpr<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");

}
