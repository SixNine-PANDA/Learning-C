#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    char ch;
    char s[100];
    char sen[200];
    
    printf("Enter the character: ");
    scanf("%c", ch);
    
    printf("Enter the string: ");
    scanf("%s", &s);
    
    printf("Enter the sentence: ");
    fgets(sen, sizeof(sen), stdin);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
  
    return 0;
}