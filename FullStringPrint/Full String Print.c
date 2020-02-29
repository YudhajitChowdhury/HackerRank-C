#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char s[100]; 
    scanf("%[^\n]s", s); //[^\n] by keeping these,scanf read until reach new line in command line.
  	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World! \n%s",&s);   
    //printf("%s",&s);
    return 0;
}
