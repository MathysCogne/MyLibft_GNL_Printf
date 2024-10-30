# Libft - Libft Extra - GNL - Ft_printf

## Libft Extra Functions

| **Function**                     | **Header**              | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `size_t get_random_index_in_range(size_t a, size_t b)` | `libft_extra.h`       | Returns a random index within the specified range `[a, b]`.                                       | `size_t index = get_random_index_in_range(1, 10);` |
| `size_t generate_random_nb(void)`| `libft_extra.h`       | Generates a random number.                                                                          | `size_t random = generate_random_nb();`         |
| `size_t ft_count_lines(const char *str)` | `libft_extra.h`       | Counts the number of lines in a given string.                                                      | `size_t lines = ft_count_lines("Hello\nWorld\n");` |
| `size_t count_words(const char *str, char sep)` | `libft_extra.h`       | Counts the number of words in a string separated by the given separator `sep`.                     | `size_t words = count_words("Hello World", ' ');` |
| `int ft_abs(int nb)`            | `libft_extra.h`       | Returns the absolute value of an integer.                                                          | `int abs_value = ft_abs(-42);`                  |
| `void *ft_realloc(void *ptr, size_t old_size, size_t new_size)` | `libft_extra.h`       | Reallocates memory for `ptr` from `old_size` to `new_size`.                                        | `ptr = ft_realloc(ptr, old_size, new_size);`   |

## Get Next Line (GNL)

| **Function**                     | **Header**              | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `char *get_next_line(int fd)`   | `gnl.h`                | Reads a line from the file descriptor `fd` and returns it as a string.                             | `char *line = get_next_line(fd);`               |
| `int ft_read(int fd, char **buffer)` | `gnl.h`                | Reads data from the file descriptor `fd` into the provided `buffer`.                               | `int bytes_read = ft_read(fd, &buffer);`        |
| `int find_end_line(char **line, char *buffer)` | `gnl.h`                | Finds the end of a line in the provided buffer and updates the line accordingly.                   | `int result = find_end_line(&line, buffer);`    |
| `int extract_line(int fd, char **line, char **remaind)` | `gnl.h`                | Extracts a line from the remainder buffer and the file descriptor.                                  | `int result = extract_line(fd, &line, &remaind);` |

## Ft_printf

| **Function**                     | **Header**              | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `int ft_printf(const char *format, ...)` | `ft_printf.h`        | Produces output according to a format string, similar to `printf`.                                | `ft_printf("Hello %s", "World");`               |
| `int ft_putlchar(int c)`        | `ft_printf.h`          | Outputs a single character `c` to the standard output.                                            | `ft_putlchar('A');`                             |
| `int ft_putlstr(char *s)`       | `ft_printf.h`          | Outputs the string `s` to the standard output.                                                   | `ft_putlstr("Hello");`                          |
| `int ft_putlnbr(int n)`         | `ft_printf.h`          | Outputs the integer `n` to the standard output.                                                  | `ft_putlnbr(42);`                               |
| `int ft_putlunbr_base(unsigned int n, char *base)` | `ft_printf.h`          | Outputs an unsigned integer `n` in the specified base.                                           | `ft_putlunbr_base(255, BASE_HEX);`             |
| `int ft_putladdr_base(void *ptr, char *base)` | `ft_printf.h`          | Outputs a pointer `ptr` in the specified base.                                                   | `ft_putladdr_base(ptr, BASE_HEX);`             |

## Standard Library Functions

| **Function**                     | **Header**              | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `void ft_bzero(void *s, size_t n)` | `libft.h`              | Sets the first `n` bytes of the memory area pointed to by `s` to zero.                           | `ft_bzero(buffer, size);`                        |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | `libft.h`              | Copies `n` bytes from memory area `src` to memory area `dest`.                                    | `ft_memcpy(dest, src, size);`                   |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | `libft.h`              | Moves `n` bytes from memory area `src` to memory area `dest`, handling overlapping regions.      | `ft_memmove(dest, src, size);`                  |
| `void *ft_memchr(const void *mem, int c, size_t size)` | `libft.h`              | Locates the first occurrence of `c` in the first `size` bytes of the memory area pointed to by `mem`. | `ft_memchr(mem, 'A', size);`                     |
| `void *ft_calloc(size_t count, size_t size)` | `libft.h`              | Allocates memory for an array of `count` elements of `size` bytes and initializes it to zero.    | `void *array = ft_calloc(count, size);`         |
| `void ft_putchar_fd(char c, int fd)` | `libft.h`              | Outputs the character `c` to the file descriptor `fd`.                                            | `ft_putchar_fd('A', 1);`                         |
| `void ft_putstr_fd(char *s, int fd)` | `libft.h`              | Outputs the string `s` to the file descriptor `fd`.                                               | `ft_putstr_fd("Hello", 1);`                      |
| `void ft_putendl_fd(char *s, int fd)` | `libft.h`              | Outputs the string `s` followed by a newline to the file descriptor `fd`.                          | `ft_putendl_fd("Hello", 1);`                     |
| `void ft_putnbr_fd(int n, int fd)` | `libft.h`              | Outputs the integer `n` to the file descriptor `fd`.                                              | `ft_putnbr_fd(42, 1);`                           |
| `size_t ft_strlen(const char *s)`  | `libft.h`              | Calculates the length of the string `s`, not including the null terminator.                       | `size_t len = ft_strlen("Hello");`               |
| `char *ft_strdup(const char *src)` | `libft.h`              | Returns a pointer to a new string which is a duplicate of the string `src`.                       | `char *dup = ft_strdup("Hello");`                |
| `char *ft_strchr(const char *string, int find)` | `libft.h`              | Locates the first occurrence of `find` in `string`.                                               | `char *ptr = ft_strchr("Hello", 'e');`          |
| `int ft_atoi(const char *str)`    | `libft.h`              | Converts the string `str` to an integer.                                                           | `int num = ft_atoi("42");`                        |
| `int ft_isdigit(int character)`   | `libft.h`              | Checks if `character` is a digit.                                                                   | `int is_digit = ft_isdigit('4');`                |
| `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | `libft.h`              | Copies the string `src` to `dest`, with size limit.                                               | `size_t copied = ft_strlcpy(dest, src, size);`  |

## Linked List Functions

| **Function**                     | **Header**              | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `void ft_lstadd_front(t_list **lst, t_list *new)` | `libft.h`              | Adds the node `new` at the beginning of the list `lst`.                                          | `ft_lstadd_front(&head, new_node);`             |
| `void ft_lstadd_back(t_list **lst, t_list *new)` | `libft.h`              | Adds the node `new` at the end of the list `lst`.                                                | `ft_lstadd_back(&head, new_node);`              |
| `void ft_lstdelone(t_list *lst, void (*del)(void *))` | `libft.h`              | Deletes the node `lst` and frees its content using `del`.                                        | `ft_lstdelone(node, del_function);`              |
| `void ft_lstclear(t_list **lst, void (*del)(void *))` | `libft.h`              | Deletes and frees all nodes of the list `lst` and sets the pointer to NULL.                      | `ft_lstclear(&head, del_function);`              |
| `void ft_lstiter(t_list *lst, void (*f)(void *))` | `libft.h`              | Iterates through the list `lst`, applying the function `f` to each node's content.               | `ft_lstiter(head, function);`                     |
| `int ft_lstsize(t_list *lst)`    | `libft.h`              | Returns the number of nodes in the list `lst`.                                                   | `int size = ft_lstsize(head);`                    |
| `t_list *ft_lstnew(void *content)` | `libft.h`              | Allocates and returns a new node with the given `content`.                                        | `t_list *new_node = ft_lstnew(content);`        |
| `t_list *ft_lstlast(t_list *lst)` | `libft.h`              | Returns the last node of the list `lst`.                                                          | `t_list *last_node = ft_lstlast(head);`          |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | `libft.h`              | Applies the function `f` to each node's content of the list `lst` and returns a new list.        | `t_list *new_list = ft_lstmap(head, function, del_function);` |

## Disclaimer
> At 42 School, most projects must comply with the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).