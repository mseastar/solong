/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:37:54 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:37:54 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static int	ft_strnbr(size_t n)
{
	int	a;

	a = 1;
	while (n / 10 != 0)
	{
		a++;
		n = n / 10;
	}
	return (a);
}

static char	*ft_if_bol(int i, size_t n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * ft_strnbr(n) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (i >= 0)
	{
		ptr[i] = (char)(n % 10 + '0');
		i--;
		n = n / 10;
	}
	return (ptr);
}

char	*ft_itoa(size_t n)
{
	char	*ptr;
	int		i;

	i = ft_strnbr(n);
	if (n < 0)
	{
		ptr = (char *)malloc(sizeof(char) * i + 2);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '-';
		ptr[i + 1] = '\0';
		while (i > 1)
		{
			ptr[i] = (char)(n % 10 * (-1) + '0');
			i--;
			n = n / 10;
		}
		ptr[i] = (char)(n * (-1) + '0');
	}
	else
		return (ft_if_bol(i, n));
	return (ptr);
}
