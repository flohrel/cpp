###############
## Variables ##
###############

NAME		=	

VPATH		=	
OBJDIR		=	obj
INCLDIR		=	

SRC			=	
OBJ			=	$(SRC:%.c=$(OBJDIR)/%.o)

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror
INCFLAGS	=	
LFLAGS		=	
RM			=	/bin/rm -rf
UNAME		:=	$(shell uname -s)


###########
## Rules ##
###########

.PHONY:			all bonus clean fclean re

all:			$(NAME)

$(OBJDIR)/%.o:	%.c | $(OBJDIR)
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
