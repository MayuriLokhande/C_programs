SHELL	:=/bin/bash
CC	:=gcc
SRC	:=enum.c
ELF	:=out/enum.elf
OBJ	:=$(SRC:.c=.o)
OBJ	:=$(addprefix out/,$(OBJ))
CFLAGS	:=-Wall -Os

default: $(ELF)

$(ELF): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

.SECONDEXPANSION:
out/%o: %c | $$(@D)/
	$(CC) -c $(CFLAGS) $< -o $@

out/:
	mkdir -p $@

clean:
	rm -rf out/

