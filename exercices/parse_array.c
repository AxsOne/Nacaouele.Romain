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

bool parse_array(char **str, struct my_json_array *array)
{
    char *t;
    if (is_char(str, '[') == true) {
        array->value = token_string(str);
        if (is_char(str, ',') == true)
            array->next = malloc(sizeof(struct my_json_array));
            array->next->value =  token_string(str);
        
        return false;
    }
    return true;
}

int main(void)
{
    char *str = "[\"hello\"]";
    struct my_json_array output_array = {0};

    printf("str before = %s\n", str);
    printf("valid token = %d\n", parse_array(&str, &output_array));
    printf("str after = %s\n", str);
    printf("output value 0 = %s\n", output_array.value);
    printf("output value 1 = %p\n", output_array.next);
}