#include <stdio.h>

int main(int argc, const char* argv[]) {
    for (int i = 1; i < argc; i++) {
        if (i != 1)
            printf(" ");
        printf("%s", argv[i]);
    }

    printf("\n");
}