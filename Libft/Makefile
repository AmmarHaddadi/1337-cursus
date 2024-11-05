# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 18:07:16 by ahaddadi          #+#    #+#              #
#    Updated: 2024/11/05 11:14:44 by ahaddadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# $@ -> target name
# $^ -> prequesits

CC = clang
CFLAGS := -Wall -Wextra -Werror

C_FILES := $(filter-out *_bonus.c, $(wildcard *.c))
O_FILES := $(C_FILES:.c=.o)

C_FILES_BNS := $(wildcard *_bonus.c)
O_FILES_BNS := $(C_FILES_BNS:.c=.o)

NAME := libft.a

all: $(NAME)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(O_FILES)
	ar -rs $@ $^

bonus: all $(O_FILES_BNS)
	# ar -rs $(NAME) $(O_FILES_BNS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean
