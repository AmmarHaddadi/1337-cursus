CFLAGS := -Wall -Wextra -Werror
C_FILES := ft_printf.c fsp-router.c fsp.c flags.c flags-router.c
O_FILES := $(C_FILES:.c=.o)
NAME := libftprintf.a


all : $(NAME)

%.o : %.c ft_printf.h
	cc $(CFLAGS) -c $<

$(NAME) : $(O_FILES) libft.a
	ar x libft.a
	ar -rcs $@ $(O_FILES) *.o

libft.a:
	cd Libft && make
	cp Libft/libft.a .

clean :
	rm -f *.o
	cd Libft && make clean

fclean : clean
	rm -f $(NAME) libft.a
	cd Libft && make fclean

re : fclean all

