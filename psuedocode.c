#define MAX 128
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char* Base64Encoder(char str[]){
	return NULL;
}
void BinaryEncoder(char c){
	int i;
	for  (i = 7; i >= 0; --i){
        	putchar( (c & (1 << i)) ? '1' : '0' );
    	}
    	putchar(' ');
}
char* MorseCodeEncoder(char str[]){
	int i, j = 0;
	char mstr[512];
	for(i = 0; str[i] != '\0'; ++i){
		switch(toupper(str[i])){
			case 'A':
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
		 
			case 'B':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
		 
			case 'C':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case 'D':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case 'E':
				  mstr[j]='.';
				  break;
	 
			case 'F':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case 'G':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case 'H':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
		 
			case 'I':
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case 'J':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case 'K':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
		 
			case 'L':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case 'M':
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
		 
			case 'N':
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
		 
			case 'O':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case 'P':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case 'Q':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			case 'R':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case 'S':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case 'T':
				  mstr[j]='-';
				  break;
	 
			case 'U':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='-';
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
				  mstr[j]='-';
				  break;
	 
			case 'Y':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case 'Z':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '0':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case '1':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-'; 
				  mstr[j]='-';
				  break;
	 
			case '2':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case '3':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case '4':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			case '5':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '6':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '7':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '8':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '9':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case '.':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			case ',':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='-';
				  break;
	 
			case ':':
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;
	 
			case '?':
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='.';
				  break;

			case '-':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			case '(': 
			case ')':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
	 
			
			case '"':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case '/':
				  mstr[j++]='-';
				  mstr[j++]='.';  
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
		 
			
			case '@':
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='-';
				  mstr[j]='.';
				  break;
	 
			case '=':
				  mstr[j++]='-';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j++]='.';
				  mstr[j]='-';
				  break;
		}
		
		mstr[++j] = '\0';		
	}
	return mstr;
}
char* Ascii85Encoder(char str[]){
	return NULL;
}
char* HuffEncoder(char str[]){
	return NULL;
}
char* Base64Decoder(char str[]){
	return NULL;
}
char* BinaryDecoder(char str[]){
	return NULL;
}
void init(tree *t){
	t->left = NULL;
	t->right = NULL;
}
void add(tree *t, char ch){
	t->ch = ch;
	init(&t);
}
void maketree(tree *t){
	tree r1, r2, r;
	init(&r1);
	init(&r2);
	add(r1, 'T');
	add(r2, 'E');
	add(r1->left, 'M');
	add(r2->left, 'A');
	add(r1->right, 'N');
	add(r2->right, 'I');
	add(r1->left->left, 'O');
	add(r1->left->right, 'G');
	add(r1->right->left, 'K');
	add(r1->right->right, 'D');
	add(r2->left->left, 'W');
	add(r2->left->right, 'R');
	add(r2->right->left, 'U');
	add(r2->right->right, 'S');
	add(r1->left->left->left, '-');
	add(r1->left->left->right, '.');
	add(r1->left->right->left, 'Q');
	add(r1->left->right->right, 'Z');
	add(r1->right->left->left, 'Y');
	add(r1->right->left->right, 'C');
	add(r1->right->right->left, 'X');
	add(r1->right->right->right, 'B');
	add(r2->left->left->left, 'J');
	add(r2->left->left->right, 'P');
	add(r2->left->right->right, 'L');
	add(r2->right->right->right, 'H');
	add(r2->right->right->left, 'V');
	add(r2->right->left->right, 'F');
	add(r2->right->left->left, '-');
	add(r1->right->right->right->right, '6');
	add(r1->left->right->right->right, '7');
	add(r1->left->left->right->right, '8');
	add(r1->left->left->left->right, '9');
	add(r1->left->left->left->left, '0');
	add(r2->left->left->left->left, '1');
	add(r2->right->right->right->left, '4');
	add(r2->right->right->right->right, '5');
	add(r2->right->right->left->left, '3');
	add(r2->right->left->left->left, '2');
	add(r1->right->right->left->right, '/');
	add(r2->right->left->left->right->right, '?');
	add(r1->left->right->right->left->left, ',');
	add(r2->left->right->left->right->left, '.');
	r->right = r2;
	r->left = r1;
}
char* MorseCodeDecoder(char str[]){
	return NULL;
}
char* Ascii85Decoder(char str[]){
	return NULL;
}
char* HuffDecoder(char str[]){
	return NULL;
}
void printmenu1(){
	char ch, str[MAX], *stren;
	int i;
	while(ch != '6'){
		printf("\nEnter String:");
		getchar();
		gets(str);
		printf("Enter choice of converting String to - \n1.Base64\n2.Binary\n3.Morse Code\n4.Ascii85\n5.Huffman\n6.Exit\n");
		scanf("%c", &ch);
		switch(ch){
			case '1':
					stren = Base64Encoder(str);
					printf("Encoded String : %s", stren);
					break;
			case '2':
					printf("Encoded String :");
					for(i = 0; str[i] != '\0'; ++i)
						BinaryEncoder(str[i]);
					break;	
			case '3':
					stren = MorseCodeEncoder(str);
					printf("Encoded String : %s", stren);
					break;
			case '4':
					stren = Ascii85Encoder(str);
					printf("Encoded String : %s", stren);
					break;
			case '5':
					stren = HuffEncoder(str);
					printf("Encoded String : %s", stren);
					break;
			case '6':
					printf("\nExiting.");
					break;
			default:
					printf("-----Wrong Choice!-----");
		}
	}
}
void printmenu2(){
	char ch, str[MAX], *strde;
	while(ch != '6'){
		printf("\nEnter String:");
		getchar();
		gets(str);
		printf("Enter choice of converting String from - \n1.Base64\n2.Binary\n3.Morse Code\n4.Ascii85\n5.Huffman\n6.Exit\n");
		scanf("%c", &ch);
		switch(ch){
			case '1':	
					strde = Base64Decoder(str);
					printf("Decoded String : %s", strde);break;
			case '2':
					strde = BinaryDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '3':
					strde = MorseCodeDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '4':
					strde = Ascii85Decoder(str);
					printf("Decoded String : %s", strde);break;
			case '5':
					strde = HuffDecoder(str);
					printf("Decoded String : %s", strde);break;
			case '6':
					printf("\nExiting.");
					break;
			default:
					printf("-----Wrong Choice!-----");
		}
	}
}
int main(){
	char ch;
	while(ch != '3'){
		printf("\nEnter choice: \n1.Encoder \n2.Decoder\n3.Exit\n");
		scanf("%c", &ch);
		switch(ch){
			case '1':
					printmenu1();
					break;
			case '2':
					printmenu2();
					break;
			case '3':
					break;
			default:
					printf("-----Wrong Choice!--------");
		}
	}
}

