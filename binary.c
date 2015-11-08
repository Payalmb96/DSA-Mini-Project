#include<stdio.h>
void BinaryEncoder(char c){
	int i;
	for  (i = 7; i >= 0; --i)
        	putchar( (c & (1 << i)) ? '1' : '0' );
}
char* BinaryDecoder(char str[]){
	return NULL;
}
