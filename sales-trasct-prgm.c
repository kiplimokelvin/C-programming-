/* Name.Kelvin kiplimo 
Reg No.ct101/g26636/25
date.06/10/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    double amount, total = 0.0;
    char filename[] = "sales.txt";
    
    // Open file for reading
    file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error opening file %s!\n", filename);
        return 1;
    }
    
    printf("Reading sales transactions...\n");
    
    // Read all transactions from file
    while (fscanf(file, "%lf", &amount) == 1) {
        printf("Transaction: $%.2f\n", amount);
        total += amount;
    }
    
    // Close the file
    fclose(file);
    
    // Display total sales
    printf("\nTotal sales for the day: $%.2f\n", total);
    printf("File has been properly closed.\n");
    
    return 0;
}