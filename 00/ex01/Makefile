###############
## Variables ##
###############

NAME		=	phonebook

OBJDIR		=	obj
INCLDIR		=	

SRC			=	ClassPhonebook.cpp \
				ClassContact.cpp \
				main.cpp
OBJ			=	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address -g3
INCFLAGS	=	
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
