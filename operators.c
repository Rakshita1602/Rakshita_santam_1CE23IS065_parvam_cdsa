#include <stdio.h>

void main() {
    int id = 100;
    id = 200;  // Assign 200 to id

    // Correcting the if conditions and the structure
    if(id > 100 && id <= 200) {  // Corrected if statement logic
        printf("ID is more than 100\n");
    } else {
        printf("ID is not greater than 100\n");
    }

    // Corrected puts statement with spelling fix
    puts("ID is a variable---");

    // This will always print
    puts("Condition checked--\n");
}