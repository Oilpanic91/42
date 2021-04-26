# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 10:40:22 by rcavalie          #+#    #+#              #
#    Updated: 2021/04/26 14:30:30 by rcavalie         ###   ########.fr        #
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
	  ft_bzero.c\
	  ft_memset.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memmove.c\
	  ft_memcmp.c\
	  ft_strlcat.c\
	  ft_strdup.c\
	  ft_calloc.c\
	  ft_putchar_fd.c\
	  ft_putnbr_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_strjoin.c\
	  ft_itoa.c\
	  ft_substr.c\
	  ft_strtrim.c\
	  ft_strmapi.c\
	  ft_split.c\

BONUS_SRC = ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
NAME = libft.a

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^
	$(AR) $@ $(OBJ)
	$(RM) $(OBJ)

bonus: $(NAME)
		$(CC) $(HEADERS) $(CFLAGS) -c $(BONUS_SRC)
		$(AR) $^ $(BONUS_OBJ)
		$(RM) $(BONUS_OBJ)

cleanbonus:
	$(RM) $(BONUS_OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
