prog : driverPhase1.o IntArray.o Files.o
	g++ -std=c++11 -o prog driverPhase1.o IntArray.o Files.o

driverPhase1.o : IntArray.h Files.h
	g++ -std=c++11 -c driverPhase1.cpp

IntArray.o : IntArray.h
	g++ -std=c++11 -c IntArray.cpp

Files.o : Files.h
	g++ -std=c++11 -c Files.cpp

clean:
	rm -f *.o
	rm prog