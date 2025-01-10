/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmstrx <hmstrx@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:14:39 by aperez-b          #+#    #+#             */
/*   Updated: 2025/01/10 17:11:35 by hmstrx           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>

int main()
{
//==========================================bonus test==========================================
    int fd1;
    int fd2;
    int i = 1;


    fd1 = open("tests/J. K. Rowling - Harry Potter 1 - Sorcerer's Stone.txt", O_RDONLY);
    fd2 = open("tests/the-king-james-bible.txt", O_RDONLY);

    char *buf;

    while ((buf = get_next_line(fd1)) != NULL)
    {
        printf("Line %d for fd %d: %s", i, fd1, buf);
        free(buf);
        i++;
    }

    printf("\n---------------------------\n");
    i = 1;
    while ((buf = get_next_line(fd2))) {
        printf("Line %d for fd %d: %s", i, fd2, buf);
        free(buf);
        i++;
    }
    close(fd1);
    close(fd2);
    
//==========================================mandatory test==========================================
    int fd = open("main.c", O_RDWR);
    char *line = get_next_line(fd);
    
    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }
    close (fd);
}