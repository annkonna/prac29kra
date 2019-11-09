CC = gcc
CFLAGS = -g

bitops: bitops.c
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm bitops

.PHONY: bitops

