#include "file_utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

// This main method intakes a read-in filename, and a write-out filename.
// It calls 2 methods to read, then write a file.
int main(int argc, char *argv[]) {
    char* buffer;
    char* filename1;
    char* filename2;
    int filesize;

    filename1 = argv[1];
    filename2 = argv[2];

    filesize = read_file(filename1, &buffer);
    write_file(filename2, buffer, filesize);

    return 0;
}
