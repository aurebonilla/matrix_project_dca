# Makefile
CXX = g++
CXXFLAGS = -O2 -Wall

# Archivos fuente y de objeto
SOURCES = main.cpp matrix.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Objetivo principal
matrix_multiplication: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o matrix_multiplication $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza
clean:
	rm -f matrix_multiplication $(OBJECTS)
