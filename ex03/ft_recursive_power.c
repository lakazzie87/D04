/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:30:29 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 10:40:30 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return(1);
	else if(power < 0)
		return(0);
	else if(power > 0)
		return(nb * ft_recursive_power(nb, power--));
	else
		return(nb);
}
