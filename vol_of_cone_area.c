//VOL OF CONE AREA OF CIRCLE AND TRIANGLE
// vol cone (3.14 r r h)/3
//circle 3.14 r r 
//triangle (b h )/2
#include <stdio.h>
int main(){
    float r;
    float h,b;
    printf("\n Input radius for cone and circle");
    scanf("%f",&r);
    printf("\n Enter H for triangle and cone");
    scanf("%f",&h);
    printf("\n enter base for triangle");
    scanf("%f",&b);
    float vol = (3.14*r*r*h)/3;
    float triangle = (b*h)/2;
    float circle = 3.14*r*r;
    printf("\n Vol of cone : %f",vol);
    printf("\n arear of circle : %f",circle);
    printf("\n area of triangle : %f",triangle);
    
    
}