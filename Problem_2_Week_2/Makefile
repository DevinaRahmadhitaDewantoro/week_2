# Target to compile the object file
quadequation: quadequation.o
	g++ quadequation.o -o quadequation.exe

# Target to compile the C++ program
quadequation.o: quadequation.cpp
	g++ -c quadequation.cpp -o quadequation.o

# Target to run the program (interactively)
run: quadequation
	./quadequation.exe

# Target to compile the object Test file
quadequationTest: quadequationTest.o
	g++ quadequationTest.o -o quadequationTest.exe

# Target to compile the C++ Test program
quadequationTest.o: quadequationTest.cpp
	g++ -c quadequationTest.cpp -o quadequationTest.o

# Target to run the Test program
test: quadequationTest
	./quadequationTest.exe

# Target to clean up compiled files
clean:
	rm -f quadequation.o quadequationTest.o quadequation.exe quadequationTest.exe
