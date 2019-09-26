/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:44:24 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/08 20:06:30 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && result == 0)
	{
		if (s1[i] != s2[i])
			result = s1[i] - s2[i];
		i++;
	}
	if (result == 0)
		result = s1[i] - s2[i];
	return (result);
}

void	ft_sort_arg(char *argv[], int count)
{
	int		i;
	int		j;
	char	*arr;

	i = 1;
	j = 1;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				arr = argv[i];
				argv[i] = argv[j];
				argv[j] = arr;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_arg(argv, argc);
	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
