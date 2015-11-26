CXX ?= g++
CFLAGS = -Wall -Wconversion -O3 -fPIC

all: mptrain mpclassify

mptrain: mptrain.cpp MultiPerceptron.o
	$(CXX) $(CFLAGS) mptrain.cpp MultiPerceptron.o -o mptrain -lm
mpclassify: mpclassify.cpp MultiPerceptron.o
	$(CXX) $(CFLAGS) mpclassify.cpp MultiPerceptron.o -o mpclassify -lm
clean:
	rm -f MultiPerceptron.o mptrain mpclassify
