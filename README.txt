3 Type Encoder : Bianry, Morse and Huffman

Name: Payal Bhujwala
MIS Id: 111408009

The Program takes an input from the user and asks the user to choose which type 
of encoding they want to use. 

The Binary encoder uses arithmetic logic to convert the ascii value of the character 
to binary and then store it in an integer array. The function then returns an array
with the binary equivalent of each alphabet separated by a space

The Morse Encoder uses switch cases to directly convert the given alphabet to its
morse equivalent and store it in a character array. The function then returns an array
with the morse code equivalent of each alphabet separated by a space

The Huffman Encoder uses trees to arrange the letters of the given string such that 
letters having more number of occurences in the string will come in the first few 
levels of the tree followed by letters of less frequencies. The tree then encodes 
the string depending on whether it goes left(0) or right(1). The function PrintCodes() 
prints the codes for all the letters separated by a space.

