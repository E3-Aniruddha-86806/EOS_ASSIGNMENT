/*
Create a multi-ﬁle project (main.c, circle.c/.h, square.c/.h, rectangle.c/.h). Compile the program using "gcc" and execute it. No fork(), exec() expected
here.
*/

#include<stdio.h>
#include"circle.h"
#include"rectangle.h"
#include"square.h"

int main()
{
  double radius, length, breadth, side;
  printf("Enter the radius of circle: ");
  scanf("%lf",&radius);
  printf("Area of circle: %.2lf\n",cal_cir_area(radius));

  printf("Enter the lenght and breadth of rectangle: ");
  scanf("%lf %lf",&length,&breadth);
  printf("Area of rectangle: %.2lf\n",cal_rec_area(length,breadth));

  printf("Enter the side of square: ");
  scanf("%lf",&side);
  printf("Area of square: %.2lf\n",cal_sqr_area(side));
  return 0;
}
