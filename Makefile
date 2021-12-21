CC = gcc

CFLAGS = -Wextra -Wall -Werror

AR = ar rcs

NAME = libftprintf.a

SRCS = 	case_c.c case_pro.c case_x.c ft_createhex.c ft_printf.c ft_strlen.c case_iord.c case_s.c case_xup.c ft_itoa.c ft_printstr_fd.c ft_unsigneditoa.c\
		case_p.c case_u.c ft_createaddrstr.c ft_printchar_fd.c  ft_stringtoupper.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): 
	$(CC) $(CFLAGS) -c $(SRCS)

all: $(NAME) 

bonus: fclean $(OBJS_B) $(OBJS)
	$(AR) $(NAME) $(OBJS_B) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJS_B) test

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re