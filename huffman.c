#include <stdio.h>
#include <stdlib.h>
#include "huffman.h" 
// A utility function allocate a new min heap node with given character
// and frequency of the character
Node* newNode(char data, unsigned freq){
    Node* temp =
          (Node*) malloc(sizeof(Node));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}
MinHeap* createMinHeap(unsigned capacity){
    MinHeap* minHeap = (MinHeap*) malloc(sizeof(MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (Node**)malloc(minHeap->capacity * sizeof(Node*));
    return minHeap;
}
int isSizeOne(MinHeap* minHeap){
    return (minHeap->size == 1);
}
int isLeaf(Node* root){
    return !(root->left) && !(root->right) ;
}
// A utility function to swap two min heap nodes
void swapNode(Node** a, Node** b){
    Node* t = *a;
    *a = *b;
    *b = t;
}
void minHeapify(MinHeap* minHeap, int idx){
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
 
    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
      smallest = left;
 
    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
      smallest = right;
 
    if (smallest != idx){
        swapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}
void insertMinHeap(MinHeap* minHeap, Node* minHeapNode){
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i && minHeapNode->freq < minHeap->array[(i - 1)/2]->freq){
        minHeap->array[i] = minHeap->array[(i - 1)/2];
        i = (i - 1)/2;
    }
    minHeap->array[i] = minHeapNode;
}
Node* extractMin(MinHeap* minHeap){
    Node* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}
// A standard funvtion to build min heap
void buildMinHeap(MinHeap* minHeap){
    int n = minHeap->size - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}
void printArr(int arr[], int n){
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf(" ");
}
// Creates a min heap of capacity equal to size and inserts all character of 
// data[] in min heap. Initially size of min heap is equal to capacity
MinHeap* createAndBuildMinHeap(char data[], int freq[], int size){
    MinHeap* minHeap = createMinHeap(size);
    int i;
    for (i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);
    minHeap->size = size;
    buildMinHeap(minHeap);
    return minHeap;
}
// The main function that builds Huffman tree
Node* buildHuffmanTree(char data[], int freq[], int size){
    Node *left, *right, *top;
    MinHeap* minHeap = createAndBuildMinHeap(data, freq, size);
    while (!isSizeOne(minHeap)){
        left = extractMin(minHeap);
        right = extractMin(minHeap);
 
        // '$' is a special value for internal nodes, not used
        top = newNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}
void printCodes(Node* root, int arr[], int top){
    if (root->left){
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right){
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (isLeaf(root)){
        //printf("%c: ", root->data);
        printArr(arr, top);
    }
}
// The main function that builds a Huffman Tree and print codes by traversing
// the built Huffman Tree
void HuffmanCodes(char data[], int freq[], int size){
   Node* root = buildHuffmanTree(data, freq, size);
   int arr[100], top = 0;
   printCodes(root, arr, top);
}
// To find the frequency of the letters
int* freqarray(char str[]){
	int i, j, k, l = 0, c;
	int freq[20], *p;
	for(i = 0; str[i] != '\0'; i++){
		c = 0;
		for(j = i + 1; str[j] != '\0'; j++)
			if(str[j] == str[i]){
				c++;
				for(k = j; str[k] != '\0'; k++)
					str[k] = str[k+1];
				str[k] = '\0';
			}
		freq[l++] = c + 1;
	}
	p = freq;
	return p;
}
/*void HuffEncoder(char str[]){
	int *freq = freqarray(str);
	int size = sizeof(str)/sizeof(str[0]);
	HuffmanCodes(str, freq, size);
}*/
// Driver program to test above functions
int main()
{
    char arr[] = "payal";
    int *freq = freqarray(arr);
    int size = sizeof(arr)/sizeof(arr[0]);
    HuffmanCodes(arr, freq, size);
    return 0;
}*/
