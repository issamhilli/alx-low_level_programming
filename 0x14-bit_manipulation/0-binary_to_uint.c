#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return (0);

    unsigned int dec_val = 0;

    for (int i = 0; b[i]; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return (0);
        dec_val = 2 * dec_val + (b[i] - '0');
    }

    return (dec_val);
}
