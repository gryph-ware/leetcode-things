cc = clang
flags = -Wall -Wextra -g
src = 392
target = out

all: $(target)

$(target): $(src)
	$(cc) $(flags) $(src).c -o $(target)

run:
	./$(target)

clean:
	rm -f $(out) $(target) *~
