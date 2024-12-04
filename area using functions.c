#include <stdio.h>
void area_of_sq(int l){
    int area=l*l;
    printf("Area of sq=%d\n",area);
}
void area_of_rect(int l,int b){
    int area = l*b;
    printf("Area of rect :%d\n",area);
}
void area_of_circle(float r){
    float area = 3.14*r*r;
    printf("Area of a circe :%f\n",area);
}
int main(){
    int l,b;
    float r;
    printf("Enter Length Bredth Radius :\n");
    scanf("%d%d%f",&l,&b,&r);
    area_of_sq(l);
    area_of_rect(l,b);
    area_of_circle(r);
}
