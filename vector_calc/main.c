#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

int main()
{
   printf("This code solves the vector mathematics\t\nthus WELCOME TO THE TERMINATIOR program that\nwill avenge us all!!!!\n\n\n ");
   sleep(2);
   printf("Select from the following\n\n");
   printf("1\tFind Resultant\n2\tFind the best route for a floating obj to take\n3\tFind the width of a river\n\n");
   int selection;
   printf("which one?");
   scanf("%d",&selection);
   if(selection==1){
    printf("input the vector quantities with a comma in between:\n\t");
    float vec1;
    float vec2;
    scanf("%f,%f",&vec1,&vec2);
    sleep(1);
    printf("Enter the angle between the vectors (in degrees): ");
    float angle_degrees;
    scanf("%f", &angle_degrees);

    float angle_radians = angle_degrees * M_PI / 180;

    float resultant;
    resultant = sqrt((vec1*vec1)+(vec2*vec2)+2*((vec1*vec2)*cos(angle_radians)));
    printf("your resultant is :%f\n\n",resultant);

   }
    return 0;
}
