/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:08:50 by apouchet          #+#    #+#             */
/*   Updated: 2018/11/29 14:14:39 by apouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
