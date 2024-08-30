//vol of cone 1/3 pi r r h 
#include <stdio.h>
int main(){
    float r;
    float h;
    float vol;
    printf("\n Enter radius ");
    scanf("%f",&r);
    printf("\n Enter height ");
    scanf("%f",&h);
    vol = 3.14*r*r*h;
    printf("\n vol = %f",vol);

}