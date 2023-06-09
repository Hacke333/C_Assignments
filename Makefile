CC = gcc
CFLAGS = -Wall -Werror

SRCS = $(shell find . -name '*.c')
BINS = $(SRCS:%.c=%)

all: $(BINS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BINS)

check:
	norminette .
