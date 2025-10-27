// PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL
// CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.
#include<stdio.h>
int main ()
{ 
   char ch;
   printf("Enter any character:");
   scanf("%c",&ch);
   
   if(ch >='A'&& ch<='Z')
   {  printf("The given character is capital letter");
   }
    else if(ch >='a'&& ch<='z')
    { printf("The given character is small letter");
	}
	else if(ch >='0'&& ch<='9')
	{printf("The given character is a digit");
	}
	else
	{printf("The given character is a special symbol");
	}
}
