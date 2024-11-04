NAME = libft.a   #Change 'libft.a' to the desired name of your executable
CC = gcc   #This is the compiler
CFLAGS = -Wall -Wextra -Werror  #Compiler flags for warnings and errors
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c  #List of your source files
OBJS = $(SRCS:.c=.o)   #Converts .c files to .o (object) files

all: $(NAME)  # This means 'make all' will build 'libft.h'
$(NAME): $(OBJS)   # To create NAME, we need the object files
	ar rcs $(NAME) $(OBJS)   #This links the object files into the executable
 %.o: %.c # This is a pattern rule to create .o files from .c files
	$(CC) $(CFLAGS) -c $< -o $@   # Compile the .c file to a .o file

clean:    # This cleans up the object files
	rm -f $(OBJS)    # Remove all object files


# Step 6: Define the 'fclean' target
fclean: clean   # First do clear, then remove the executable
	rm -f $(NAME)   # Remove the executable


re: fclean all   # First do fclean, then do all
