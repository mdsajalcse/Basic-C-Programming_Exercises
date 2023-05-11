//diameter, circumference and area of circle

#include<stdio.h>
int main(){

   double diameter, radius, circumference, area;

   printf("Enter Radius=");
   scanf("%lf",&radius);

   diameter=2*radius;
   circumference=2*3.14*radius;
   area=3.14*(radius*radius);

   printf("Diameter is::%lf\n",diameter);
   printf("Circumference is::%lf\n",circumference);
   printf("Area is::%lf",area);



return 0;
}
