#include "print_frame.h"

int print_frame(char *filepath) {
    const int MAX_STR_LENGTH = 256;
    
    int num_line;
    char line[MAX_STR_LENGTH];
    FILE *input_file;

    input_file = fopen(filepath, "r");
    if (input_file == NULL) {
        fprintf(stderr, "Could not open the file: %s", filepath);
        exit(1);
    }

    num_line = 0;
    while (fgets(line, MAX_STR_LENGTH, input_file) != NULL) {
        printf("%s", line);
        num_line++;
    }

    return num_line;
}