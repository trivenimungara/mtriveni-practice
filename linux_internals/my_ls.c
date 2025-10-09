#include <stdio.h>      // for printf()
#include <dirent.h>     // for opendir(), readdir(), closedir()
#include <stdlib.h>     // for exit()

int main()
{
    DIR *d;                   // Pointer to directory
    struct dirent *dir;       // Structure to store directory entry

    d = opendir(".");         // "." means current directory
    if (d == NULL) {
        perror("opendir");    // Print error if directory can't open
        exit(1);
    }

    // Read and print all files
    while ((dir = readdir(d)) != NULL) {
        printf("%s\n", dir->d_name);
    }

    closedir(d);              // Close directory when done
    return 0;
}

