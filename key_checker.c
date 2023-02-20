/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:24:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/02/20 11:01:15 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	action(int keycode, t_vars *vars)
{
	printf("Keycode: %d\n", keycode);
	return (0);
}

int ft_program_close(t_vars *vars)
{
	write(1, "BYE", 3);
	mlx_destroy_window(vars->mlx, vars->win);
	mlx_destroy_display(vars->mlx);
	free(vars->mlx);
	exit(EXIT_SUCCESS);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init(); // inicializa
	vars.win = mlx_new_window(vars.mlx, 200, 200, "key checker"); // cria a janela

	mlx_key_hook(vars.win, action, &vars);
	mlx_hook(vars.win, 17, 0, ft_program_close, &vars);
	mlx_loop(vars.mlx);
	mlx_clear_window(vars.mlx, vars.win);
}
