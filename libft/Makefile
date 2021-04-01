# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 10:40:22 by rcavalie          #+#    #+#              #
#    Updated: 2021/04/01 18:02:53 by rcavalie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = -ar crs
CC = -gcc
CFLAGS = -Wall -Werror -Wextra -I . -c
RM = -rm -rf
SRC = ft_strlen.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strnstr.c\
	  ft_strlcpy.c\

OBJ = $(SRC:.c=.o)
NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^
	$(AR) $@ $(OBJ)
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
