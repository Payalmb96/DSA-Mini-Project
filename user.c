/*	3 - Type Encoder: Encodes the input string to any chosen type of 
 *	encoding from the Menu 
 *	Copyright (C) 2015  Payal Bhujwala
 *
 *	project.c is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	project.c is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *      Contact payalmb96@gmail.com for any queries related to this software
 */

#define MAX 128

#include<stdio.h>
#include<stdlib.h>

#include "morse.h"
#include "huffman.h"
#include "binary.h"

#define BINARY 1
#define MORSE 2
#define HUFFMAN 3
#define EXIT 4

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void printmenu(){

	printf("\nEnter choice of converting string to :- \n");
	printf("%s%d. Binary Encoding\n", KRED, BINARY);
	printf("%s%d. Morse Encoding\n", KGRN, MORSE);
	printf("%s%d. Huffman Encoding\n", KCYN, HUFFMAN);
	printf("%s%d. Exit\n",KYEL, EXIT);

}

int main(){

	int n;
	char str[MAX];
	
	printf("\t\t\t\t====================================================================\n");
	printf("\t\t\t\t\t%s3 - Type Encoders: %sBinary, %sMorse and %sHuffman %s\n", KRED, KGRN, KYEL, KBLU, KNRM);
	printf("\t\t\t\t====================================================================\n");
	
	while(1){
		printmenu();
		scanf("%d", &n);
		getchar();
		switch(n){
			
			case BINARY: 	
					printf("\n%sEnter the string :%s", KMAG, KNRM);
					fgets(str, sizeof(str), stdin);
					BinaryEncoder(str);
					break;
			
			case MORSE:
					printf("\n%sEnter the string :%s", KMAG, KNRM);
					fgets(str, sizeof(str), stdin);
					MorseCodeEncoder(str);
					break;
					
			case HUFFMAN:
					printf("\n%sEnter the string :%s", KMAG, KNRM);
					fgets(str, sizeof(str), stdin);
					HuffEncoder(str);
					break;
									
			case EXIT:
					printf("%s", KNRM);
					exit(0);
			
			default: 
					printf("\n----------Wrong choice!--------\n");
							 
		}
	}
	
	return 0;

}
