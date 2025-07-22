/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <musisman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:15:53 by musisman          #+#    #+#             */
/*   Updated: 2024/12/31 16:30:12 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s, char *buffer);
char	*ft_strchr(const char *s, int c);
char	*ft_line_s(char *s);
char	*ft_new_line_s(char *s);
char	*get_next_line(int fd);

#endif
