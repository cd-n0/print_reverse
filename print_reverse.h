#ifndef PRINT_REVERSE_H
#define PRINT_REVERSE_H

#include <string.h>
#include <unistd.h>

/* APPROACH 1 */
inline int print_reverse(char *str) {
    int len = strlen(str);  /* Determine the length of the input string. */
    for (int i = len - 1; i >= 0; i--) {  /* Loop through the characters of the string in reverse order. */
        write(1, &str[i], 1);  /* Write each character to standard output. */
    }
    return 0;  /* Return zero to indicate success. */
}

/* APPROACH 2 */
inline int print_reverse2(char *str)
{
    if (!*str)
        return 1;
    if (print_reverse2(str + 1) == 1)
    {
        write(1, str, 1);
        return 1;
    }
    return -1; /* that means, something unexcepted happened */
}

#endif /* PRINT_REVERSE_H */
