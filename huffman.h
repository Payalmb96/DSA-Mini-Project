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
