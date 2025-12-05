#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage:\n");
        printf("  ./JIK --greet <name>\n");
        printf("  ./JIK --bye <name>\n");
        printf("  ./JIK --length <name>\n");
        return 1;
    }

    if (strcmp(argv[1], "--greet") == 0) {
        printf("Hello %s \n", argv[2]);
    } else if (strcmp(argv[1], "--bye") == 0) {
        printf("Goodbye %s \n", argv[2]);
    } else if (strcmp(argv[1], "--length") == 0) {
        printf("The name '%s' has %lu characters\n", argv[2], strlen(argv[2]));
    } else {
        printf("Unknown command: %s\n", argv[1]);
    }

    return 0;
}

