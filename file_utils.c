//
// Created by Wes Harrison on 9/17/2018.
//
/* Most of this file was found on Stack Overflow.
 * I have combed over it with a fine tooth comb.
 * I have also learned a TON about how to dereference pointers to a state
 * which is usable.
*/


#include <file_utils.h>

int read_file(char* filename, char **buffer) {
    FILE* openSesame;
    openSesame = fopen(filename, "r");

    //gets the size of the file
    struct stat st;
    stat(filename, &st);
    int size = st.st_size;

    *buffer = malloc(size);
    fread(*buffer, 1, size, openSesame );
    return size;
}
int write_file(char* filename, char*buffer, int size) {
    FILE* writeMe;
    writeMe = fopen(filename, "w");

    for (int k = size - 1; k >= 0; k--) {
        char *x = buffer + k;
        fprintf(file2, "%c", *x);
    }

    return 1;
}
