#include <stdio.h>
#include <string.h>

int main()
{
    char input;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &input);
    char ch= tolower((unsigned char)input);
	
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  {
		printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}