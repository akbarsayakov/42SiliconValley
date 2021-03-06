/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:38:28 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/12 22:41:07 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	if (nb <= 1)
		return (0);
	div = 2;
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		else
			div++;
	}
	return (1);
}
