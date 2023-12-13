// file_operations.c

#include "file_manager.h"
#include "file_operations.h"
#include <stdio.h>
#include <ctype.h>

bool isValidFilename(const char* filename) {
    // Implement the logic to check if a filename is valid
    // (This could involve checking for illegal characters, length, etc.)
    return (strlen(filename) > 0 && strlen(filename) < FILENAME_LENGTH);
}

void promptUser(char* promptMessage, char* userInput) {
    printf("%s", promptMessage);
    scanf("%s", userInput);
}

void displayMenu() {
    printf("\nFile Management Menu:\n");
    printf("1. Change Directory\n");
    printf("2. Create File\n");
    printf("3. Delete File\n");
    printf("4. List Files\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

void executeUserChoice(struct FileManager* fileManager, char choice) {
    char userInput[MAX_FILENAME_LENGTH];

    switch (choice) {
        case '1':
            promptUser("Enter new directory: ", userInput);
            changeDirectory(fileManager, userInput);
            break;
        case '2':
            promptUser("Enter filename to create: ", userInput);
            if (isValidFilename(userInput)) {
                if (createFile(userInput)) {
                    printf("File created successfully.\n");
                } else {
                    printf("Error creating file.\n");
                }
            } else {
                printf("Invalid filename.\n");
            }
            break;
        case '3':
            promptUser("Enter filename to delete: ", userInput);
            if (deleteFile(userInput)) {
                printf("File deleted successfully.\n");
            } else {
                printf("Error deleting file.\n");
            }
            break;
        case '4':
            listFiles(fileManager);
            break;
        case '0':
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}
