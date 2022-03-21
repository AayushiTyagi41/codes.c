#include <stdio.h>  
void printUnsignedRange(int bytes)  
{  
    int bits = 8 * bytes;    
    unsigned long long to = (1LLU << (bits - 1)) + ((1LL << (bits - 1)) - 1);;      
    printf(" 0 to %llu\n\n", to);  
}  
void printSignedRange(int bytes)  
{  
    int bits = 8 * bytes;     
    long long from  = -(1LL << (bits - 1));  
    long long to    =  (1LL << (bits - 1)) - 1;  
    printf(" %lld to %lld\n\n", from, to);  
}  
int main()  
{  
    /* print the range of integer type */
    printf("siddhant\n");  
    printf("Range of int =");  
    printSignedRange(sizeof(int));
    printf("Range of unsigned int =");  
    printUnsignedRange(sizeof(unsigned int));   
    /* print the range of character type */  
    printf("Range of char =");  
    printSignedRange(sizeof(char));  
    printf("Range of unsigned char =");  
    printUnsignedRange(sizeof(unsigned char));  
    /*print the range of long type */  
    printf("Range of long =");  
    printSignedRange(sizeof(long));    
    printf("Range of unsigned long =");  
    printUnsignedRange(sizeof(unsigned long));   
    /* print the range of short type */  
    printf("Range of short =");  
    printSignedRange(sizeof(short));  
    printf("Range of unsigned short =");  
    printUnsignedRange(sizeof(unsigned short));  
    /* print the range of long long type */  
    printf("Range of long long =");  
    printSignedRange(sizeof(long long));    
    printf("Range of unsigned long long =");  
    printUnsignedRange(sizeof(unsigned long long));  
    return 0;  
}