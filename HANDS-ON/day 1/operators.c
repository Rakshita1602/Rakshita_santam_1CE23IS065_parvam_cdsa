#include <stdio.h>

void main() {
    int id = 100;
    id = 200; 
    if(id > 100 && id <= 200) {  // Corrected if statement logic
        printf("ID is more than 100\n");
    } else {
        printf("ID is not greater than 100\n");
    }
    puts("ID is a variable---");
    puts("Condition checked--\n");
}