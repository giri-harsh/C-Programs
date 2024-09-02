#include <stdio.h>
int main(){
    float d,r;
    printf("\n Enter amount in rs : ");
    scanf("%f",&r);
    printf("\n Enter amount in Dollar : ");
    scanf("%f",&d);
    float r_to_d = r/83.5;
    float d_to_r = d*83.5 ;
    printf("\n Amount from Rs to Dollar is : %f",r_to_d);
    printf("\n Amount from Dollar to Rs is : %f",d_to_r); 
}