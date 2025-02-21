#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    //swicth case
    printf("Enter Two numbers\n");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("Enter an operator eg '+','-','*','/' \n");
    char op;
    scanf(" %c",&op);
    float result=0;
    
    switch (op)
    {
    case '+' :
        result = a + b;
        break;
    case '-' :
    result = a-b;
    break;
    case '*' :
    result = a*b;
    break;
    case '/' :
    result = a/b;
    break;
    default:
        
        break;
    }
    
    printf("Result: %f\n", result);
}

