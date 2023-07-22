#include "print_reverse.h"
#include <string.h>
#include <unistd.h>

int print_reverse_iterative(char *str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        write(1, &str[i], 1);
    }
    return 0;
}

int print_reverse_recursive(char *str) {
    if (!*str)
        return 1;
    if (print_reverse_recursive(str + 1) == 1) {
        write(1, str, 1);
        return 1;
    }
    return -1;
}
