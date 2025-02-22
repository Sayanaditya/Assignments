#include <stdio.h>
#include <stdlib.h>



void copyFileWithoutComments(const char *sourceFileName, const char *destinationFileName);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source file> <destination file>\n", argv[0]);
        return 1;
    }
    copyFileWithoutComments(argv[1], argv[2]);
    printf("File copied successfully without comments.\n");
    return 0;
}

void copyFileWithoutComments(const char *sourceFileName, const char *destinationFileName) {
    FILE *sourceFile, *destinationFile;
    char ch, prevCh = 0;
    int inComment = 0;
    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourceFileName);
        exit(1);
    }
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file %s\n", destinationFileName);
        fclose(sourceFile);
        exit(1);
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (inComment) {
            if (prevCh == '*' && ch == '/') {
                inComment = 0;
                ch = 0; // Suppress this character from being written
            }
        } else {
            if (prevCh == '/' && ch == '*') {
                inComment = 1;
                prevCh = 0; 
                continue;
            }
            if (prevCh != 0) {
                if(!(prevCh == '/' && ch =='*')){
                    fputc(prevCh, destinationFile);
                }
            }
        }
        prevCh = ch;
    }
    if (prevCh != 0 && !inComment) {
        fputc(prevCh, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
}
