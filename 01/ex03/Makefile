###############
## Variables ##
###############

NAME		=	test

VPATH		=	src
OBJDIR		=	obj
LIBDIR		=	libft
INCLDIR		=	incld

SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp
OBJ			=	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
INCFLAGS	=	-I./$(INCLDIR) -I./$(LIBDIR)/incld
LFLAGS		=
RM			=	/bin/rm -rf
UNAME		:=	$(shell uname -s)


###########
## Rules ##
###########

.PHONY:			all bonus clean fclean re

all:			$(NAME)

$(OBJDIR)/%.o:	%.cpp | $(OBJDIR)
				$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

$(OBJDIR):
				mkdir $(OBJDIR)

bonus:
				@make all

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME) $(OBJDIR)

re:				fclean all
