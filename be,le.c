#include <stdio.h>

int main() {
     
     short n = 0x1234;
     char low_byte = n % 0x100;
     char left_byte = *(char*)&n;
     
     if (low_byte == left_byte)
        printf("little endian");
        
    else 
        printf("big endian");
	
	return 0;
}