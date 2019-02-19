/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:09:26 by apouchet          #+#    #+#             */
/*   Updated: 2019/02/19 16:21:29 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "else.h"

float	ft_atof(char *s)
{
	int	i;
	int	a;

	i = 0;
	while (*s && (ft_isspace(*s) || (*s == '+' && ft_isdigit(s[1])) ||
		(*s == '-' && ft_isdigit(s[1]))))
		s++;
	if (!ft_isdigit(*s))
		return (0);
	while (*s == '0')
		s++;
	a = ft_atoi(s);
	if (*s && *s != '.')
		s++;
	if (*s && ft_isdigit(s[1]))
		s++;
	else
		return (0);
	while (ft_isdigit(s[i]))
		i++;
	return (a + (ft_atoi(s) / ft_pow(10, i)));
}
