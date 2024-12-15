#include <stdio.h>

int main() {
    int variable = 10;
    int *ptr = &variable;
    //Su dung bien:
    
    printf("Gia tri cua bien: %d\n", variable);
    printf("Dia chi bien: %p\n", (void*)&variable);
	//Su dung con tro:
	
    printf("Gia tri cua bien su dung con tro: %d\n", *ptr);
    printf("Dia chi cua bien su dung con tro: %p\n", (void*)ptr);

    return 0;
}

