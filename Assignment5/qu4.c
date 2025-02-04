#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *sourceFile, *destinationFile;
    char ch;

    if (argc != 3) {
        printf("Error!\n");
        return 1;
    }

    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Can't open source file%s\n", argv[1]);
        return 1;
    }

    destinationFile = fopen(argv[2], "w");
    if (destinationFile == NULL) {
        printf("Can't open destination file%s\n", argv[2]);
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Done copying\n");
    return 0;
}