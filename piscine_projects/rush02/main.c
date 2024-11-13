/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:55:05 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/20 23:16:56 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int main(int argc, char **argv) {
    char *num = NULL;
    DictEntry dictionary[MAX_SIZE];
    int dict_size = 0;
	char *filename;

	filename = "numbers.dict";
    if (argc != 2 && argc != 3) {
        print_error(1);
        return 1;
    }

    if (argc == 3) {
        if (parse_dictionary(argv[1], dictionary, &dict_size) != 0) {
            print_error(2);
            return 1;
        }
        if (check_validity(argv[2], &num) != 0) 
		{
            print_error(1);
            return 1;
        }
    } 
	else 
	{

        if (check_validity(argv[1], &num) != 0) 
		{
            print_error(1);
            return 1;
        }
		if (parse_dictionary(filename, dictionary, &dict_size) != 0) {
			print_error(2);
			return (1);
		}

    }
    convert_to_words(num, dictionary, dict_size);
    free(num);
    free_dictionary(dictionary, dict_size);
    return 0;
}
