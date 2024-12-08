/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbadda <bbadda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 05:23:54 by bbadda            #+#    #+#             */
/*   Updated: 2024/01/01 13:29:21 by bbadda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					s;
	unsigned long long	r;

	r = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		s = -s;
	if ((*str == '+' || *str == '-'))
		str++; 
	while (*str >= '0' && *str <= '9')
	{
		r = (r * 10) + (*str - 48);
		str++;
	}
	if (r > 9223372036854775807 && s == 1)
		return (-1);
	if (r > 9223372036854775807 && s == -1)
		return (0);
	return (r * s);
}
