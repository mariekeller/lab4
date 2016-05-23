solve: prepare main.o quadratic.o
	gcc -lm -o bin/solve obj/main.o obj/quadratic.o

main.o: src/main.c
	gcc -c src/main.c -o obj/main.o
	
quadratic.o: src/quadratic.c
	gcc -c src/quadratic.c -o obj/quadratic.o

prepare:
	mkdir bin
	mkdir obj

clean:
	rm -f bin/* obj/*
