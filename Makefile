# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:21:00 by jwalsh            #+#    #+#              #
#    Updated: 2016/11/05 17:32:42 by jwalsh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAG = -Wall -Werror -Wextra

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c

BIN = ft_memset.o \
	  ft_bzero.o \
	  ft_memcpy.o \
	  ft_memccpy.o \
	  ft_memmove.o \
	  ft_memchr.o \
	  ft_memcmp.o \
	  ft_strlen.o \
	  ft_strdup.o \
	  ft_strcpy.o \
	  ft_strncpy.o \
	  ft_strcat.o \
	  ft_strncat.o \
	  ft_strlcat.o \
	  ft_strchr.o \
	  ft_strrchr.o \
	  ft_strstr.o \
	  ft_strnstr.o \
	  ft_strcmp.o \
	  ft_strncmp.o \
	  ft_atoi.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isalnum.o \
	  ft_isascii.o \
	  ft_isprint.o \
	  ft_toupper.o \
	  ft_tolower.o \
	  ft_memalloc.o \
	  ft_memdel.o \
	  ft_strnew.o \
	  ft_strdel.o \
	  ft_strclr.o \
	  ft_striter.o \
	  ft_striteri.o \
	  ft_strmap.o \
	  ft_strsub.o \
	  ft_strjoin.o \
	  ft_strtrim.o \
	  ft_strsplit.o

HEAD = includes/*.h

opti: $(MAKE) all -j4

all: $(NAME)

$(NAME):
	gcc -c $(CFLAG) $(SRC) -I $(HEAD)
	ar rc $(NAME) $(BIN)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean
	all
