solve: main.o quadratic.o
	gcc -o bin\solve obj\main.o obj\quadratic.o

main.o: src\main.c
	gcc -c src\main.c -o obj\main.o
	
quadratic.o: src\quadratic.c
	gcc -c src\quadratic.c -o obj\quadratic.o