main: main.o Level_Selection.o Tokens.o Guessing_Number.o
	g++ main.o Level_Selection.o Tokens.o Guessing_Number.o -o main

main.o: main.cpp Level_Selection.h
	g++ -c main.cpp

Level_Selection.o: Level_Selection.cpp Level_Selection.h
	g++ -c Level_Selection.cpp

Tokens.o: Tokens.cpp Tokens.h
	g++ -c Tokens.cpp

Guessing_Number.o: Guessing_Number.cpp Guessing_Number.h
	g++ -c Guessing_Number.cpp

clean:
	rm -f main *.o *~

run: main
	./main