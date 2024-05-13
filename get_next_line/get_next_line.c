/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:03:46 by diolivei          #+#    #+#             */
/*   Updated: 2024/05/09 16:05:50 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{

}

#include <stdio.h>
#include <fcntl.h>
int main()
{
    int fd = open("teste.txt", O_RDONLY);
    char *line;

    while (line = get_next_line(fd))
        printf("%s", line);
    return (0);
}
