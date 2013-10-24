OBJS = radix swap final_radix float_radix array_mv
CC = gcc

all: radix swap final_radix float_radix array_mv

array_mv:
	$(CC) array_mv.c -o array_mv

float_radix:
	$(CC) float_radix.c -o float_radix

final_radix:
	$(CC) final_radix.c -o final_radix

print_binary:
	$(CC) print_binary.c -o print_binary

radix:
	$(CC) radix.c -o radix

swap:
	$(CC) swap.c -o swap

clean:
	rm -rf $(OBJS)

