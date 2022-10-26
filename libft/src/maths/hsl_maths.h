/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hsl_maths.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloquet <sloquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:18:38 by zsheep            #+#    #+#             */
/*   Updated: 2022/10/24 04:21:54 by sloquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HSL_MATHS_H
# define HSL_MATHS_H

# include "limits.h"
# include "stdio.h"
# include "math.h"
# include "../sort/hsl_sort.h"
# include "../tab/hsl_tab.h"

# define N_PI		3.14159265358979323846
# define N_PI_X2	6.283185307
# define N_PI_D2	1.570796327

# define N_EXP		2.71828182845904523536
# define N_EXP_X2	5.436563657
# define N_EXP_D2	1.359140914

# define N_GR		1.61803398874989484820
# define N_GR_X2	3.236067977
# define N_GR_D2	0.8090169944

# define N_SQR_3	1.73205080756887729352
# define N_SQR_3_X2	3.464101615
# define N_SQR_3_D2	0.8660254038

# define N_SQR_2	1.41421356237309504880
# define N_SQR_2_X2	2.828427125
# define N_SQR_2_D2	0.7071067812

# define N_EPSILON	0.00001

/**
 *		ft_abs.c
 */
long	ft_abs(long n);

/**
 * 		ft_angle_conv.c
 */
double	ft_deg_to_rad(double degrees);
double	ft_rad_to_deg(double radians);

/**
 * 		ft_cheatsheet.c
 */
void	cheatsheet_radians(void);
void	cheatsheet_types(void);
void	cheatsheet_matrice_rotations(void);

/**
 * 		ft_distance_btw_values.c
 */
int		ft_distance_btw_values(const int a, const int b);
/**
 *		ft_factorial.c
 */
int		ft_factorial(int nb);

/**
 *		ft_fequal.c
 */
int		ft_fequal(double a, double b);

/**
 *		ft_fibonacci.c
 */
int		ft_fibonacci(int index);

/**
 *		ft_isprime.c
 */
int		ft_isprime(int nb);

/**
 *		ft_median.c
 */
int		ft_median(int *median, const int *tab, int size);

/**
 *		ft_minmax.c
 */
long	ft_min(const long a, const long b);
long	ft_max(const long a, const long b);

/**
 *		ft_nextprime.c
 */
int		ft_nextprime(int nb);

/**
 *		ft_power.c
 */
int		ft_power(int nb, int power);

/**
 *		ft_sqrt.c
 */
int		ft_sqrt(int nb);

#endif /* HSL_MATHS_H */
