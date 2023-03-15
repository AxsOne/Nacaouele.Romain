#include "exercices.h"
#include <stdbool.h>
#include <stdio.h>
bool is_char(char **str, char c);

bool is_word(char **str, char *word)
{
    char *stock = (*str);
    for (int i = 0; *word; i++) {
        if (is_char(str, *word) == false) {
            (*str) = stock;
            return false;
        }  
        word++;
    }
    return true;
}
