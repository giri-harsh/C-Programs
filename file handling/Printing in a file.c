#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("C:\\Users\\Harsh Giri\\OneDrive\\Documents\\C-work\\C-Programs\\File Handling\\Output  File\\Printing.txt","w");
    fprintf(ptr,"Hello World");
    fclose(ptr);
}