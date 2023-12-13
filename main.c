// main.c

#include "file_manager.h"
#include "file_operations.h"
#include <stdbool.h>

int main() {
    struct FileManager fileManager;
    initializeFileManager(&fileManager);

    char choice;
    do {
        displayMenu();
        scanf(" %c", &choice);
        executeUserChoice(&fileManager, tolower(choice));
    } while (choice != '0');

    return 0;
}
