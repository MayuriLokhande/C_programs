SHELL	:/bin/bash
CC	:=gcc
SRC	:=static.c
ELF	:out/static.elf
OBJ	:=$(SRC:.c = .o)
OBJ	:=$(addprefix out/,$(OBJ))
CFLAGS	:=-Wall -Werror -Os

default: $(ELF)
$(ELF): $(OBJ)
	$(CC) -c $(CFLAGS) $^ -o $@

.SECONDEXPANSION:
out/%.o:%.c | $$(@D)\
	$(CC) -c $(CFLAGS) $< -o $@

out/:
	mkdir -p $@

clean:
	rm -rf out/
