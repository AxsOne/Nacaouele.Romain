/*
** EPITECH PROJECT, 2023
** How to do a JSON parser in C - Workshop - Alexis Cheron
** File description:
** Source code
*/
#ifndef JSON_EXERCISES_H
#define JSON_EXERCISES_H

#include <stdbool.h>
#include <stdio.h>

struct object_item {
    char *key;
    char *value;
};

struct my_json_array {
    char *value;
    struct my_json_array *next;
};

char *token_string(char **str);
bool token_bool(char **str, bool *value);
bool is_char(char **str, char c);
bool is_word(char **str, char *word);

#endif