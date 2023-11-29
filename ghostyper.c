#include <stdio.h>
#include <unistd.h>

#define MAX_USERS    100
#define MAX_STRLEN   64

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char *argv[]) {
    const char *file = argv[1];
    FILE *fp = fopen(file, "r");
    char buffer[1000];
    int i = 0, c;
	
    if (fp == NULL) {
	fprintf(stderr, "Error! Valio vrg no existe ese file.\n");
        return EXIT_FAILURE;
    }

    while ((c = fgetc(fp)) != EOF) {
	    buffer[i] = c;
	    fputc(buffer[i], stdout);
	    fflush(stdout);
	    usleep(10*1000);
	    i++;
    }

    return 0;
}
