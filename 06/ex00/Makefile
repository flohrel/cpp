###############
## Variables ##
###############

NAME		=	convert

VPATH		=	src
OBJDIR		=	obj
LIBDIR		=	libft
INCLDIR		=	include

SRC			=	main.cpp \
				Converter.cpp \
				Int.cpp \
				Float.cpp \
				Factory.cpp
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

.PHONY:			all bonus clean fclean re verbose

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

debug:			CFLAGS += -g3 -fsanitize=address
debug:			verbose

fclean:			clean
				$(RM) $(NAME) $(OBJDIR)

re:				fclean all

verbose:		CFLAGS += -DVERBOSE=1
verbose:		$(NAME)
