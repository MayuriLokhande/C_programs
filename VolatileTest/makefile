SHELL	:=/bin/bash
CC	:=gcc
ELF	:=out/volatile.elf
SRC	:=volatile.c
OBJ	:=$(SRC:.c=.o)
OBJ	:=$(addprefix out/,$(OBJ))
CFLAGS	:=-Wall -Werror -Os

default: $(ELF)

$(ELF): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

.SECONDEXPANSION:
out/%.o: %.c | $$(@D)/
	 $(CC) -c $(CFLAGS) $< -o $@

out/:
	mkdir -p $@

clean:
	rm -rf out/

