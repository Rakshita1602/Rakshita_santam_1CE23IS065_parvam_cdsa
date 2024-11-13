void main() {
    int i = 100, j = 2;      // Declare and initialize i and j
    int c = i / 2;           // Declare c as an int and assign i / 2
    
    // 3.4 is a double by default. Assign it to a float
    float f = 3.4;           // Automatically converted to float
    
    // 5.4f is explicitly a float
    float t = 5.4f;          // Declare t as a float and assign 5.4f
    
    // Variable 0 is invalid, use a valid variable name
    float zero = 100.00F;    // Declare zero as a float and assign 100.00F
    
    // Correct the print statement
    printf("%f", (zero / j));  // Divide zero by j and print the result
}