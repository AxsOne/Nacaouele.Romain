/*
** EPITECH PROJECT, 2023
** te
** File description:
** te
*/
#include "exercices.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


bool parse_object_item(char **str, struct object_item *item)
{
    item->key = token_string(str);
    if (is_char(str, ':') == false);
        item->value = token_string(str);
    return true;
}