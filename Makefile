quicksort: obj main.o quickalg.o
	g++ -Wall -o quicksort main.o quickalg.o

obj:

quickalg.o: quickalg.cpp
	g++ -c -o quickalg.o quickalg.cpp

main.o: main.cpp 
	g++ -c -o main.o main.cpp

clean:
	rm -f *.o quicksort
