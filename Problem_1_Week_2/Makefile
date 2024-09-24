# Target to compile the object file
payslip: payslip.o
	g++ payslip.o -o payslip.exe

# Target to compile the C++ program
payslip.o: payslip.cpp
	g++ -c payslip.cpp -o payslip.o

# Target to run the program (interactively)
run: payslip
	./payslip.exe

# Target to compile the object Test file
payslipTest: payslipTest.o
	g++ payslipTest.o -o payslipTest.exe

# Target to compile the C++ Test program
payslipTest.o: payslipTest.cpp
	g++ -c payslipTest.cpp -o payslipTest.o

# Target to run the Test program
test: payslipTest
	./payslipTest.exe

# Target to clean up compiled files
clean:
	rm -f payslip.o payslipTest.o payslip.exe payslipTest.exe
