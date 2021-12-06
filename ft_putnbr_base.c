/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flplace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:26:28 by flplace           #+#    #+#             */
/*   Updated: 2021/12/06 17:26:30 by flplace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

oid	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				baselen;

	n = 0;
	baselen = ft_strlen(base);
	if (ft_checkbase(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n >= (unsigned int)baselen)
			ft_putnbr_base(n / baselen, base);
		ft_putchar(base[(n % baselen)]);
	}
}
