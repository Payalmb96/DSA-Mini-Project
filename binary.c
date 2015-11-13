/*	Binary Encoder: Encodes the input string to Binary 
 *	Copyright (C) 2015  Payal Bhujwala
 *
 *	binary.c is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	binary.c is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *      Contact payalmb96@gmail.com for any queries related to this software
 */
#include<stdio.h>
int* BinaryEncoder(char str[]){
	int i, n, q, rem, k = 7, j = 0;
	int A[128], B[8];
	scanf("%s", str);
	for(i = 0; str[i] != '\0'; i++){
		n = (int)str[i];
		while(n != 0){
			q = n / 2;
			rem = n % 2;
			B[k--] = rem;
			n = q;
		}
		if(k != -1)
			while(k != -1)
				B[k--] = 0; 
		k = 7;
		int l; 
		for(l = 0; l < 8; l++)
			A[j++] = B[l];
	}
	return A;
}
