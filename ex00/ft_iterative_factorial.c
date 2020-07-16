/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:06:01 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 09:22:26 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	if(nb < 0 || nb > 12)
		return(0);

	i = 2;
	result = 1;
	{
		result = result *i;
		i++;
	}
	return(result);
}
