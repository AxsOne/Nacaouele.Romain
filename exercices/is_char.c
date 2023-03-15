/*
** EPITECH PROJECT, 2023
** workshop parcer
** File description:
** parcer
*/

#include "exercices.h"
#include <stdbool.h>
#include <stdio.h>

bool is_char(char **str, char c)
{
    if (*str[0] == c) {
        (*str)++;
        return true;
    }
    return false;
}