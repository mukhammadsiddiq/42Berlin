/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammadqodirmaxmudov <muhammadqodirmax    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:51:00 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/30 16:14:48 by muhammadqod      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    char *str;

    // Open the file with read-only mode
    fd = open("read.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;  // Return error code 1 if file can't be opened
    }
    // str = get_next_line(fd);
    // printf("%s", str); // Print the line

    // Read lines one by one using get_next_line

    int i = 1;
    while ((str = get_next_line(fd)))
    {
        printf("%d: %s", i, str); // Print the line
        free(str);
        i++;
        // printf("/////////////// NEW LOOP ////////////////////\n");
    }

    // Close the file descriptor
    close(fd);

    return 0;  // Successfully finished
}
