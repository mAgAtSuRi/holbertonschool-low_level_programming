#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char *s;
    char *line;
    
    scanf("Enter a character %c", &ch)  ;
    scanf("%s", s);
    scanf("%[^\n]%*c", line);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", line);
    return 0;
}
