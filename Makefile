NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -MMD -MP

AR = ar rcs

RM = rm -f

SRCS =	ft_printf.c \
		ft_putnbrs.c \
		ft_putstrings.c \
		ft_putptr.c

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)