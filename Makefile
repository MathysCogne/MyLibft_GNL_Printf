# Makefile generated by Make My File: https://github.com/MathysCogne/Make_My_File-42
# Date of generation: 30-10-2024 07:01:24

NAME = libft.a

SRCDIR = src
OBJDIR = obj
INCDIR = include

# Source Files
SRC = libft/ft_strlen.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strrchr.c libft/ft_lstmap.c libft/ft_strncmp.c libft/ft_strchr.c libft/ft_split.c libft/ft_putchar_fd.c libft/ft_strlcpy.c libft/ft_strmapi.c libft/ft_lstiter.c libft/ft_substr.c libft/ft_atoi.c libft/ft_lstlast.c libft/ft_lstnew.c libft/ft_putnbr_fd.c libft/ft_strjoin.c libft/ft_strdup.c libft/ft_isprint.c libft/ft_memchr.c libft/ft_lstadd_front.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_lstdelone.c libft/ft_memset.c libft/ft_memcpy.c libft/ft_memcmp.c libft/ft_strtrim.c libft/ft_isalpha.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_isalnum.c libft/ft_strlcat.c libft/ft_lstclear.c libft/ft_bzero.c libft/ft_striteri.c libft/ft_memmove.c libft/ft_itoa.c libft/ft_lstsize.c libft/ft_calloc.c libft/ft_lstadd_back.c libft/ft_strnstr.c \
	ft_printf/ft_putlunbr_base.c ft_printf/ft_putladdr_base.c ft_printf/ft_putlnbr.c ft_printf/ft_putlstr.c ft_printf/ft_printf.c libft_extra/ft_realloc.c \
	libft_extra/garbage_collector.c libft_extra/ft_random_nb_in_range.c libft_extra/ft_count_lines.c libft_extra/ft_count_worlds.c libft_extra/ft_generate_random_nb.c libft_extra/ft_abs.c libft_extra/ft_atoll.c \
	get_next_line/get_next_line_utils.c get_next_line/get_next_line.c 
OBJ = $(SRC:.c=.o)
SRC := $(addprefix $(SRCDIR)/, $(SRC))
OBJ := $(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(OBJ))

# Libraries and Linker Flags
LDFLAGS = 
LIBS = 

# Archiver
AR = ar
ARFLAGS = rcs

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR) -g3

# Compilation mode (silent by default, set VERBOSE=1 to show commands)
VERBOSE ?= 0
ifeq ($(VERBOSE),1)
  V := 
else
  V := @
endif

# Colors
RED     := "\033[1;31m"
GREEN   := "\033[1;32m"
RESET   := "\033[0m"



# Default Rule
all: $(OBJDIR) $(NAME)

# Object Directory Rule
$(OBJDIR):
	$(V)mkdir -p $(OBJDIR) || true

# Dependency Files
DEP = $(OBJ:.o=.d)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(dir $@)
	$(V)$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

# Linking Rule
$(NAME): $(OBJ)
	$(V)$(AR) $(ARFLAGS) $@ $^
	$(V)echo $(GREEN)"[$(NAME)] Library created ✅"$(RESET)

# Clean Rules
clean:
	$(V)echo $(RED)'[$(NAME)] Cleaning objects'$(RESET)
	$(V)rm -rf $(OBJDIR)

fclean: clean
	$(V)echo $(RED)'[$(NAME)] Cleaning all files'$(RESET)
	$(V)rm -f $(NAME)

re: fclean all

# Makefile Reconfiguration 
regen:
	makemyfile

.PHONY: all clean fclean re bonus regen
.DEFAULT_GOAL := all
