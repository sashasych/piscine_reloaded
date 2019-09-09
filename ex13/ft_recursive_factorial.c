/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:43:36 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/08 19:50:55 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb >= 1)
		return (ft_iterative_factorial(nb - 1) * nb);
	else if (nb == 0)
		return (1);
	else
		return (0);
}
