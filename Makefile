CC = gcc
CFLAGS = -Wall -Wextra -Werror

CLIENT_SRC = client.c
SERVER_SRC = server.c
COMMON_SRC = minitalk.h

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

CLIENT_EXEC = client
SERVER_EXEC = server

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
LDFLAGS = -L$(LIBFT_DIR) -lft

.PHONY: all fclean

all: $(CLIENT_EXEC) $(SERVER_EXEC)

$(CLIENT_EXEC): $(CLIENT_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(SERVER_EXEC): $(SERVER_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

%.o: %.c $(COMMON_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
clean:
	rm *.o

fclean:
	rm -f $(CLIENT_OBJ) $(SERVER_OBJ) $(CLIENT_EXEC) $(SERVER_EXEC)
	$(MAKE) -C $(LIBFT_DIR) clean

re: fclean all
