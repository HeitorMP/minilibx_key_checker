/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:24:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/12/08 12:24:34 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include <stdio.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	action(int keycode, t_vars *vars)
{
	printf("Keycode: %d\n", keycode);
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init(); // inicializa
	vars.win = mlx_new_window(vars.mlx, 200, 200, "key checker"); // cria ajanela

	mlx_key_hook(vars.win, action, &vars);

	mlx_loop(vars.mlx);
}
