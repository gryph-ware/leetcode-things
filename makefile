cc = clang
flags = -Wall -Wextra -g
src = 2239
target = out

all: $(target)

$(target): $(src)
	$(cc) $(flags) $(src).c -o $(target)

run:
	./$(target)

