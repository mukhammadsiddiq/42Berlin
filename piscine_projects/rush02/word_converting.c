#include "rush.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define MAX_GROUPS 20

char* find_in_dict(char *num_str, DictEntry dictionary[], int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        if (ft_strcmp(dictionary[i].key, num_str) == 0) 
        {
            return dictionary[i].value;
        }
        i++;
    }
    return NULL;
}

void handle_group_of_three(char *group, DictEntry dictionary[], int size, char *output)
{
    int len = ft_strlen(group);

    if (len == 3 && group[0] != '0') {
        char hundreds[2] = {group[0], '\0'};
        ft_strcat(output, find_in_dict(hundreds, dictionary, size));
        ft_strcat(output, " hundred ");
    }
    if (len >= 2) {
        if (group[len - 2] == '1') {
            char teens[3] = {group[len - 2], group[len - 1], '\0'};
            ft_strcat(output, find_in_dict(teens, dictionary, size));
            return;
        } else if (group[len - 2] != '0') {
            char tens[3] = {group[len - 2], '0', '\0'};
            ft_strcat(output, find_in_dict(tens, dictionary, size));
            ft_strcat(output, "");
        }
    }
    if (group[len - 1] != '0') {
        char ones[2] = {group[len - 1], '\0'};
        ft_strcat(output, find_in_dict(ones, dictionary, size));
    }
}

void convert_to_words(char *num_str, DictEntry dictionary[], int size) {
    int len = ft_strlen(num_str);
    if (len == 0 || ft_strcmp(num_str, "0") == 0) {
        printf("%s\n", find_in_dict("0", dictionary, size));
        return;
    }

    char *suffixes[] = {"", " thousand", " million", " billion", " trillion",
                        " quadrillion", " quintillion", " sextillion", " septillion",
                        " octillion", " nonillion", " decillion", " undecillion"};
    char *groups[MAX_GROUPS];  
    int group_count = 0;
    
    while (len > 0) {
        int group_len = (len >= 3) ? 3 : len;
        char group[4] = {0};  
        char output[BUFFER_SIZE] = {0};

        strncpy(group, num_str + (len - group_len), group_len);
        handle_group_of_three(group, dictionary, size, output);

        if (group_count > 0 && suffixes[group_count][0] != '\0') {
            ft_strcat(output, suffixes[group_count]);
        }

        groups[group_count] = ft_strdup(output);  
        group_count++;
        len -= group_len;
    }
    int i = group_count - 1;
    while (i >= 0)
    {
        ft_putstr(groups[i]);
        free(groups[i]);
        i--;
    }
    ft_putstr(" \n");
}
