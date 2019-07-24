/*
** EPITECH PROJECT, 2019
** change_str
** File description:
** pisicne synthèse
*/

#include "../include/my.h"
#include "../include/struct.h"

char *my_realoc(char *src)
{
    char *result = NULL;

    if (src == NULL)
        result = malloc(sizeof(char) * 2);
    else
        result = malloc(sizeof(char) * (my_strlen(src) + 2));
    my_strcpy(result, src);
    if (src != NULL)
        free(src);
    return (result);
}

int count_word_split(char const *str, char split)
{
    int space = 1;
    int len = 0;

    for (int i = 0; str[i] != 0; i = i + 1) {
        if (str[i] != split && space == 1) {
            space = 0;
            len = len + 1;
        }
        else if (str[i] == split)
            space = 1;
    }
    return (len);
}

void boucle_split(char const *str, char **result, char split)
{
    int w = 0;
    int chara = 0;
    int space = 1;

    for (int i = 0; str[i] != 0; i = i + 1) {
        if (str[i] == split && space == 0) {
            result[w][chara] = 0;
            space = 1;
            chara = 0;
            w = w + 1;
        }
        else if (str[i] != split) {
            space = 0;
            result[w] = my_realoc(result[w]);
            result[w][chara] = str[i];
            result[w][chara + 1] = 0;
            chara = chara + 1;
        }
    }
}

char **split(char const *str, char split)
{
    char **result = NULL;
    int len = count_word_split(str, split);

    if (len == 0)
        return (NULL);
    result = malloc(sizeof(char *) * (len + 1));
    for (int i = 0; i < len; i = i + 1)
        result[i] = malloc(sizeof(char));
    result[len] = NULL;
    boucle_split(str, result, split);
    return (result);
}