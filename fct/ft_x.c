/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:06:43 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 23:06:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_x(unsigned int nb)
{
	unsigned long long int nb2 = (unsigned long long int)nb;
	ft_putnbr_base(nb2,"0123456789abcdef");

}