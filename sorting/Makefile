OBJS = radix swap final_radix
CC = gcc

all: radix swap final_radix

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

