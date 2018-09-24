/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 13:11:27 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 18:00:59 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H
# define __FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# define FLOAT_PREC 1000000

# define \x1b[31m  RED
# define \x1b[32m  GREEN
# define \x1b[33m  YELLOW
# define \x1b[34m  BLUE
# define \x1b[35m  MAGENTA
# define \x1b[36m  CYAN
# define \x1b[37m  WHITE  
# define \x1b[0m  RESET
# include <wchar.h>

typedef struct	s_padd_handle
{
	int w_padding;
	int z_padding;
	int left;
	int space;
	int sharp;
}				t_padd_handle;

typedef struct	s_prec
{
	int prec;
}				t_prec;

typedef struct	s_count
{
	int count;
}				t_count;

typedef struct	s_flags
{
	int		set;
}				t_flag;

t_padd_handle	*g_padd;
t_prec			*g_pre;
t_count			*g_s_count;
t_flag			*g_flag;

int				ft_printf(const char *str, ...);
int				ft_arg_number(const char *str);
int				ft_handle_args(va_list argptr, const char *str);
char			*ft_arg_types(const char *str);
int				ft_handle_int(va_list argptr, const char *str, int *ind);
int				ft_handle_uint(va_list argptr, const char *str, int *ind);
int				ft_handle_char(va_list argptr, const char *str, int *ind);
void			ft_handle_double(va_list argptr, const char *str, int *ind);
int				ft_handle_float(va_list argptr, const char *str, int *ind);
int				ft_handle_string(va_list argptr, const char *str, int *ind);
int				ft_handle_wstring(va_list argptr, const char *str, int *ind);
int				ft_handle_hex(va_list argptr, const char *str, int *ind);
int				ft_handle_oct(va_list argptr, const char *str, int *ind);
int				ft_handle_pointer(va_list argptr, const char *str, int *ind);
int				ft_handle_binary(va_list argptr, const char *str, int *ind);
void			ft_handle_flags(const char *str, int *ind);
int				ft_handle_mod(const char *str, int *ind);
int				ft_get_padding(va_list argptr, const char *str, int *ind);
int				ft_get_precision(va_list argptr, const char *str, int *ind);
int				ft_get_max(const char *str, int *ind);
int				ft_get_min(const char *str, int *ind);
void			ft_get_hash(const char *str, int *ind);
void			ft_get_space(const char *str, int *ind);
void			ft_zero_padding(const char *str, int *ind);
void			ft_putdouble(double n);
int				ft_putfloat(double n);
int				ft_power_10(int prec);
char			*ft_itoa_base(long long n, int base);
char			*ft_itoa_baseu(unsigned long long n, int base);
void			ft_pad(int len);
void			ft_zpad(int len);
int				ft_digit_size(long long n);
int				ft_roundoff(void);
void			ft_shift(const char *str, int *ind);
void			ft_get_left(const char *str, int *ind);
void			ft_get_plus(const char *str, int *ind);
void			ft_addpad(unsigned long long hold, int isd);
void			ft_putnstr(const char *str, size_t n);
void			ft_check(int len);
void			ft_putwstr(wchar_t *str);
void			ft_putnwstr(wchar_t *str, size_t n);
size_t			ft_wstrlen(const wchar_t *s);
char			*ft_itoa_basealpha(long long n, int base);
int				ft_handle_uhex(va_list argptr, const char *str, int *ind);
#endif
