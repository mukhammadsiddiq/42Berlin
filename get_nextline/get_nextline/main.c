/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammadqodirmaxmudov <muhammadqodirmax    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:51:00 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/28 20:57:12 by muhammadqod      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    char *str;

    // Open the file with read-only mode
    fd = open("text.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;  // Return error code 1 if file can't be opened
    }

    // Read lines one by one using get_next_line
    while ((str = get_next_line(fd)) != NULL)
    {
        // printf("%s", str); // Print the line
        free(str);
		str = get_next_line(fd);  // Free the memory allocated for the line
    }

    // Close the file descriptor
    close(fd);

    return 0;  // Successfully finished
}
