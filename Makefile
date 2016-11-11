##
## Makefile for my_printf in /home/slejeune/Unix_System_Prog/PSU_2016_my_printf
## 
## Made by Simon LEJEUNE
## Login   <slejeune@epitech.net>
## 
## Started on  Fri Nov 11 17:55:54 2016 Simon LEJEUNE
## Last update Fri Nov 11 18:00:16 2016 Simon LEJEUNE
##

SRC=	src/my_printf.c \
	src/my_putstr.c \
	src/my_putchar.c \
	src/my_put_nbr.c

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
