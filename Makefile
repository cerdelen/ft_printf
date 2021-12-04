CC = gcc

CFLAGS = -Wextra -Wall -Werror

AR = ar rcs

NAME = libftprintf.a

SRCS = 	ft_itoa.c\
		ft_printf.c\
		ft_createaddrstr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_toupper.c\
		ft_unsigneditoa.c\
		ft_createhex.c\
		case_iord.c\
		case_pro.c\
		case_u.c\
		case_xup.c\
		case_c.c\
		case_p.c\
		case_s.c\
		case_x.c\
		ft_strlen.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): 
	$(CC) $(CFLAGS) -c $(SRCS)

all: $(NAME) 

bonus: fclean $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re