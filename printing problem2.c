#include <stdio.h>
//fuction that prints namaste if user in Indian and Hello if user is non indian
void printNamaste(){
    printf("Namaste\n");
    printhello();
}
void printhello(){
printf("Hello\n");
}

int main(){
    int country;
    printf("Please enter 1 for Indian 2 for non Indian\n");
    scanf("%d",&country);
    if (country==1){
     printNamaste();
    }
    else 
    printhello();
    return 0;
}