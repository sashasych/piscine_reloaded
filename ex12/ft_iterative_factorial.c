/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:12:06 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/09 23:19:59 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb > 15)
		return (0);
	if (nb > 1)
		while (nb != 1)
		{
			result *= nb;
			nb--;
		}
	return (result);
}
