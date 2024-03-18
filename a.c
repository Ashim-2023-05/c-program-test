#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myfunc() {
    static int x = 5;
    printf("%d\n", ++x);
}

int main() {
    myfunc();
    myfunc();
    myfunc();
    return EXIT_FAILURE;
}