OBJS = radix makeMap
CC = gcc

all: radix makeMap

makeMap:
	$(CC) makeMap.c -o makeMap

radix:
	$(CC) radix.c -o radix

clean:
	rm -rf $(OBJS)
