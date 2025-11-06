#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];
    char choice;
    
    // Open file in append mode to preserve existing records
    file = fopen("borrowed_books.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);
        
        // Remove newline character
        title[strcspn(title, "\n")] = 0;
        
        // Write title to file
        fprintf(file, "%s\n", title);
        
        // Confirmation message
        printf("Title '%s' successfully stored in borrowed_books.txt\n", title);
        
        printf("Do you want to add another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear input buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    fclose(file);
    printf("All book titles have been saved.\n");
    
    return 0;
}