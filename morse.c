#include<stdio.h>
#include<ctype.h>
#include "morse.h"
char* MorseCodeEncoder(char str[]){
	int i, j = 0;
	char mstr[512];
	for(i = 0; str[i] != '\0'; ++i){
		switch(toupper(str[i])){
			case 'A':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
		 
			case 'B':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
		 
			case 'C':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';				  
				  break;
	 
			case 'D':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'E':
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'F':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'G':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'H':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
		 
			case 'I':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'J':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'K':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
		 
			case 'L':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'M':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
		 
			case 'N':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
		 
			case 'O':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'P':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'Q':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'R':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'S':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case 'T':
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'U':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'V':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			case 'W':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case 'X':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'Y':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case 'Z':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '0':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '1':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-'; 
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '2':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '3':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '4':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '5':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '6':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '7':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '8':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '9':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
	 
			case '.':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case ',':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j] = ' ';
				  break;
	 
			case '?':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;

			case '/':
				  mstr[j++]='-';
				  mstr[j++]='.';  
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j] = ' ';
				  break;
		}
		mstr[++j] = '\0';		
	}
	return mstr;
}
char* MorseCodeDecoder(char str[]){
	return NULL;
}
