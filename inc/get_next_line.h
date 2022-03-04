/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:35:30 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/01 12:21:35 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s1);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char *str, int i);
#endif