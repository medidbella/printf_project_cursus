/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midbella <midbella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:32:32 by midbella          #+#    #+#             */
/*   Updated: 2023/12/01 17:52:01 by midbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int nb)
{
	long	n;
	char	s[10];
	int		j;
	int		tot;

	tot = 0;
	n = nb;
	if (n < 0)
	{
		tot += write(1, "-", 1);
			n = n * -1;
	}
	j = 0;
	while (n >= 10)
	{
		s[j] = (n % 10) + 48;
		n = n / 10;
		j++;
	}
	s[j] = n + 48;
	while (j >= 0)
		tot += write(1, &s[j--], 1);
	return (tot);
}
