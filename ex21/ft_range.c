/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:45:22 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/08 20:10:35 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int count;
	int	*arr;
	int i;

	i = 0;
	if (max <= min)
		return (NULL);
	count = max - min;
	arr = (int*)malloc(sizeof(int) * count);
	if (!arr)
		return (NULL);
	while (i < count)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
