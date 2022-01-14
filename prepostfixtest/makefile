SHELL	:=/bin/bash
CC	:=gcc
SRC	:=main.c
ELF	:=out/main.elf
OBJ	:=$(SRC:.c=.o)
OBJ	:=$(addprefix out/,$(OBJ))

default:$(ELF)
$(ELF): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

.SECONDEXPANSION:
out/%.o: %.c | $$(@D)/
	$(CC) -c $(CFLAGS) $< -o $@

out/:
	mkdir -p $@

clean:
	rm -rf out/

