#include<stdio.h>

int main() {
    int day = 2;
    printf("The day with number %d is ", day);

    // Switch statement to check the day number
    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");  // Corrected to Tuesday (as 2 should represent Tuesday)
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day number");
            break;
    }
}