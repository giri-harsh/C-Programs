#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("\n Enter Marks of Subject A");
    scanf("%d",&a);
    printf("\n Enter Marks of Subject B");
    scanf("%d",&b);
    printf("\n Enter Marks of Subject C");
    scanf("%d",&c);
    printf("\n Enter Marks of Subject D");
    scanf("%d",&d);
    printf("\n Enter Marks of Subject E");
    scanf("%d",&e);
    float percentage = ((a+b+c+d+e)/500.00)*100;
    printf("\n Percentage obtained is %f ",percentage);
    char grade;
    
    if (percentage >= 90){
    grade = 'A';
    
    }
    else if (percentage >=80 && percentage<90){
        grade='B';
    }
    else if (percentage>=60 && percentage <80)
    grade ='C';
    else 
    grade ='D';
    printf("\n Grade : %c",grade);


}
