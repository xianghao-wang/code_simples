CC := clang

all: kahan

kahan: kahan.c
	$(CC) -o $@ $< -lm

.PHONY: clean
clean:
	rm kahan