// file_operations.h

#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#define FILENAME_LENGTH 100

bool isValidFilename(const char* filename);
void promptUser(char* promptMessage, char* userInput);
void displayMenu();
void executeUserChoice(struct FileManager* fileManager, char choice);

#endif
