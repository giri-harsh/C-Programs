// c to f f = ((c *9)/5)+32
// c = (f-32)*5 / 9
#include <stdio.h>
int main(){
    float f;
    float c;
    printf("\n Enter Temp in Celcius");
    scanf("%f",&c);
    printf("\n enter temp in faren");
    scanf("%f",&f);
    // float convert_to_f = ((c*9)/5)+32);
    float convert = (((c*9)/5)+32);
    float result = (((f-32)*5)/9);
    printf("\n Celcius to Faren : %f",convert);
    printf("\n Faren to celcius : %f",result);


}