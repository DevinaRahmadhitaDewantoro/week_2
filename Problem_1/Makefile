
CXX = g++
CXXFLAGS = -Wall -g
SRC = payslip.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = payslip

all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del -f $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

test: run
