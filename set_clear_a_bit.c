#include <stdio.h>
#include <stdbool.h>

//show the coverting for decimal to binary
bool getBit(int n, int index) {
    return ((n & (1 << index)) > 0);
}

//set the bit and clear the bit
int setBit(int n, int index, bool b) {
	//the b is switching, when b is 1 set the bit to 1, on the other hand is 0.
    if (b)
        return (n | (1 << index));	
	else
		return (n & ~(1 << index));
}


int main() {
    int num = 16, index;

    printf("Input\n");
    for (int i = 7; i >= 0; i--) 
        printf("%d ", getBit(num,i));
    printf("\n");

    /* set bit */
    index = 6;
    printf("# Setting %d-th bit\n", index);
    num = setBit(num, index, true);
    for (int i = 7; i >= 0; i--) 
        printf("%d ", getBit(num,i));
    printf("\n");

    /* unset (clear) bit */
    index = 4;
    printf("# Unsetting (Clearing) %d-th bit\n", index);
    num = setBit(num, index, false);
    for (int i = 7; i >= 0; i--) 
        printf("%d ", getBit(num,i));
    printf("\n");

    return 0;
}