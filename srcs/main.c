/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:38:01 by rbenjami          #+#    #+#             */
/*   Updated: 2023/07/12 13:23:21 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	int					i;
	t_lst				*a;
	t_lst				*b;

	a = NULL;
	b = NULL;
	i = 1;
	if (ac < 2)
		return (ft_printf("%s", "Try again"));
	else if (ac > 1)
	{
		while (av[i])
			add_to_stack(&a, create_head(ft_atoi(av[i++])));
	}
	if (check_order(&a))
		return (1);
	else
	{
		check_sort(&a, &b);
	}
}


