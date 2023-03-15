#include "exercices.h"
#include <stdbool.h>
#include <stdio.h>
bool is_word(char **str, char *word);

bool token_bool(char **str, bool *value)
{
    if (is_word(str, "true") == true) {
        (*value) = true;
        return true;
    }
     if (is_word(str, "false") == true) {
        (*value) = false;
        return true;
    }
}