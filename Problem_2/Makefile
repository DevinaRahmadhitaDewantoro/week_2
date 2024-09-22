# Target to compile the C++ program
quadequation: quadequation.o
	g++ quadequation.o -o quadequation

# Target to compile the object file
quadequation.o: quadequation.cpp
	g++ -c quadequation.cpp -o quadequation.o  

# Target to run the program
run: quadequation
	./quadequation

# Target to clean up compiled files
clean:
	del -f quadequation.o quadequation  