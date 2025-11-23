prog : driver_phase2.o Iterator.o List.o Node.o
	g++ -std=c++11 -o prog driver_phase2.o Iterator.o List.o Node.o

driver_phase1.o : Iterator.h List.h Node.h
	g++ -std=c++11 -c driver_phase1.cpp

driver_phase2.o : Iterator.h List.h Node.h
	g++ -std=c++11 -c driver_phase2.cpp

Iterator.o : Iterator.h
	g++ -std=c++11 -c Iterator.cpp

List.o : List.h
	g++ -std=c++11 -c List.cpp

Node.o : Node.h
	g++ -std=c++11 -c Node.cpp

clean:
	rm -f *.o
	rm prog