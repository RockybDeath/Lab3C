hello: hello.c
	gcc -std=c89  -ansi  -pedantic-errors -Wall -Werror hello.c -o hello
remove:
	rm -r hello
