#include <stdio.h>
#include "ft_printf.h"

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <unistd.h>

int main()
{
    // Basic width tests (minimum field width)
    printf("Width tests:\n");
    printf("|%10d|\n", 42);       // Right justify: |        42|
    printf("|%10s|\n", "hello");  // Width with string: |     hello|
    printf("|%10x|\n", 42);       // Width with hex: |        2a|

    // Minus flag tests (left justify)
    printf("\nMinus flag tests:\n");
    printf("|%-10d|\n", 42);      // |42        |
    printf("|%-10s|\n", "hello"); // |hello     |
    printf("|%-10x|\n", 42);      // |2a        |

    // Zero flag tests (zero padding)
    printf("\nZero flag tests:\n");
    printf("|%010d|\n", 425);      // |0000000042|
    printf("|%010x|\n", 42);      // |000000002a|
    printf("|%010u|\n", 42);      // |0000000042|

    // Precision tests
    printf("\nPrecision tests:\n");
    printf("|%.5d|\n", 42);       // |00042|
    printf("|%.5s|\n", "hello");  // |hello|
    printf("|%.2s|\n", "hello");  // |he|

    // Combined flags
    printf("\nCombined flag tests:\n");
    printf("|%-10.5d|\n", 42);    // |00042     |
    printf("|%010.5d|\n", 42);    // |     00042|
    printf("|%-10.2s|\n", "hello"); // |he        |

    // Edge cases
    printf("\nEdge cases:\n");
    printf("|%-5.3d|\n", 1);      // |001  |
    printf("|%05.3d|\n", 1);      // |  001|
    printf("|%.0d|\n", 0);        // ||

    // Pointer tests
    int num = 42;
    printf("|%20p|\n", &num);     // Right justified pointer
    printf("|%-20p|\n", &num);    // Left justified pointer

    return 0;
}

// int main()
// {
// 	printf("|%04s|\n", "Hello");
// }
