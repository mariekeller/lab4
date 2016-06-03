.PHONY: clean test prepare

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
	rmdir bin obj
	
test.o: test/test.c
	gcc -Ithirdparty -c test/test.c -o obj/test.o
	
quadratic_test.o: test/quadratic_test.c
	gcc -Isrc -Ithirdparty -c test/quadratic_test.c -o obj/quadratic_test.o
	
test: prepare test.o quadratic_test.o quadratic.o
	gcc -lm -o bin/test obj/test.o obj/quadratic_test.o obj/quadratic.o