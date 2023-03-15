/*
** EPITECH PROJECT, 2023
** t
** File description:
** t
*/

#include "exercices.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *token_string(char **str)
{
    char *stock;
    if ((**str) != '"') {
        return NULL;
    }
    stock = malloc(sizeof(char) * strlen(*str) + 1);
    int i = 0;
    (*str)++;
    while ((**str) != '"') {
        stock[i] = (**str);
        (*str)++;
        i++;
    }
    stock[i] == '\0';
    (*str)++;
    return stock;
}