
CC=cc

all:
	$(MAKE) -C ./mlx
	cc -I./mlx -O3 -I.. -g -c -o key_checker.o key_checker.c
	cc -o key_checker key_checker.o -L./mlx -lmlx -lXext -lX11 -lm -lbsd
clean: 
	rm -rf *.o
fclean: clean
	rm -rf key_checker
re: fclean all
