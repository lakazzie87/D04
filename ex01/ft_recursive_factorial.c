/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:26:49 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 09:30:25 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	if(nb < 0 || nb >12)
		return(0);
	else if(nb > 1)
		return(nb * ft_recursive_factorial(nb - 1));
	else
		return(0);
}
