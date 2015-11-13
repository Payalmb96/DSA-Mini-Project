/*	Huffman Encoder: Encodes the input string to Huffman Encoding
 *	Copyright (C) 2015  Payal Bhujwala
 *
 *	huffman.h is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	huffman.h is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *      Contact payalmb96@gmail.com for any queries related to this software
 */
// A Huffman tree node
typedef struct Node{
    char data;  
    unsigned freq;  
    struct Node *left, *right; 
}Node;
 
// A Min Heap:  Collection of min heap (or Hufmman tree) nodes
typedef struct MinHeap{
    unsigned size;   
    unsigned capacity;   
    Node **array;  
}MinHeap;
Node* newNode(char data, unsigned freq);
MinHeap* createMinHeap(unsigned capacity);
int isSizeOne(MinHeap* minHeap);
int isLeaf(Node* root);
void swapNode(Node** a, Node** b);
void minHeapify(MinHeap* minHeap, int idx);
void insertMinHeap(MinHeap* minHeap, Node* minHeapNode);
Node* extractMin(MinHeap* minHeap);
void buildMinHeap(MinHeap* minHeap);
void printArr(int arr[], int n);
MinHeap* createAndBuildMinHeap(char data[], int freq[], int size);
Node* buildHuffmanTree(char data[], int freq[], int size);
void printCodes(Node* root, int arr[], int top);
void HuffmanCodes(char data[], int freq[], int size);
int* freqarray(char str[]);
void HuffEncoder(char str[]);
