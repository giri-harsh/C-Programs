#include<stdio.h>
int main(){
    FILE *ptr= fopen("C:\\Users\\Harsh Giri\\OneDrive\\Documents\\!Programing Language\\C-work\\C-Programs\\File Handling\\Hello.txt","w");
    if (ptr != NULL)
    printf("File opend\n");
    else 
    printf("File not open\n");
    char content[] = "Hello";
    fprintf(ptr,"%s",content);
    fclose(ptr);

}

