/*
** my_printf.c for my_printf in /home/slejeune/Unix_System_Prog/PSU_2016_my_printf
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Fri Nov 11 16:10:06 2016 Simon LEJEUNE
** Last update Fri Nov 11 18:04:59 2016 Simon LEJEUNE
*/

#include <stdarg.h>
#include "../include/my.h"

int	my_printf(char *s, ...)
{
  va_list	ap;
  int	i;

  va_start(ap, s);
  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] == '%')
	{
	  if (s[i] == 'c')
	    my_putchar(va_arg(ap, int));
	  if (s[i] == 'S')
	    my_putstr(va_arg(ap, char*));
	  if (s[i] == 'd')
	    my_put_nbr(va_arg(ap, int));
	  if (s[i] == '\n')
	    my_putchar('\n');
	}
      i++;
    }
}
