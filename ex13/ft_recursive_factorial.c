/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:43:36 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/09 23:19:37 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1 && nb <= 15)
		return (ft_recursive_factorial(nb - 1) * nb);
	else if (nb == 0)
		return (1);
	else
		return (0);
}
