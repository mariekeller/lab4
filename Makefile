.PHONY: clean test prepare

solve: prepare main.o quadratic.o
	gcc -o bin/solve obj/main.o obj/quadratic.o -lm 

main.o: src/main.c
	gcc -c src/main.c -o obj/main.o
	
quadratic.o: src/quadratic.c
	gcc -c src/quadratic.c -o obj/quadratic.o

prepare: bin obj

bin:
	mkdir bin
	
obj:
	mkdir obj

clean:
	rm -f bin/* obj/*
	rmdir bin obj
	
test.o: test/test.c
	gcc -Ithirdparty -c test/test.c -o obj/test.o
	
quadratic_test.o: test/quadratic_test.c
	gcc -c test/quadratic_test.c -o obj/quadratic_test.o -Isrc -Ithirdparty
	
test: prepare test.o quadratic_test.o quadratic.o
	gcc -o bin/test obj/test.o obj/quadratic_test.o obj/quadratic.o -lm 
