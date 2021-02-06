/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:39:49 by aerragha          #+#    #+#             */
/*   Updated: 2018/10/26 15:17:18 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include "libft/libft.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

int	get_next_line(const int fd, char **line);
int	splitting(char **s, char **line, int fd);

#endif
