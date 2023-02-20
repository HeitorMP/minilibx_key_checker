
CC=cc

all:
	cc -o key_checker key_checker.c -L./mlx -lmlx -lXext -lX11 -lm -lbsd
clean: 
	rm -rf key_checker
fclean: clean
	rm -rf key_checker
re: fclean all
