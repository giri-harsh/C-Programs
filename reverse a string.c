#include <stdio.h>
void reverse(char s1[],int s,int e){
    if (s>=e)
    return;

    char temp=s1[s];
    s1[s]=s1[e];
    s1[e]=temp;
    reverse(s1,s+1,e-1);

}
int main(){
    char s1[50];
    fgets(s1,sizeof(s1),stdin);
    int len=strlen(s1);
    reverse(s1,0,len-1);
    printf("reversed string %s",s1);    
    
}