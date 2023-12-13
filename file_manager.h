// file_manager.h

#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <stdbool.h>

#define MAX_FILENAME_LENGTH 100

struct FileManager {
    char currentDirectory[MAX_FILENAME_LENGTH];
};

void initializeFileManager(struct FileManager* fileManager);
void changeDirectory(struct FileManager* fileManager, const char* newDirectory);
bool createFile(const char* filename);
bool deleteFile(const char* filename);
void listFiles(const struct FileManager* fileManager);

#endif
