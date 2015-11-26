# MultiPerceptron

####Introduction
> MultiPerceptron is an implementation of Multiclass perceptron.

####Files
Here are two files. One is the source code of MultiPerceptron, the other one is the introduction of data format. 

- MultiPercetron.py<br>
Python 2.7 code of Multiclass Perceptron.

- DataFormat.txt<br>
  Introduction of data format.
  
- MultiPerceptron.h<br>
  head file of Multiperceptron class declaration.

- MultiPerceptron.cpp<br>
  C++ code of MultiPerceptron.
  
- mptrain.cpp & mpclassify.cpp<br>
  code of train & classify module.
  
- Makefile<br>
  File used to compile mptrain.cpp & mpclassify.cpp and generate corresponding executable file.


####Updates
updates on 2015-11-25:

- Use numpy.matrix to store weights matrix of perceptron.

- When vector is sparse and it's dimensionality is very big, using function *predict2()* to calculate dot product of two vector is much more effective than using *predict()*

Updates on 2015-11-26:

- Added a c++ implementation of multiperceptron.

- This c++ multiperceptron can almost read data file following the same format of python version, except the label. It can only recognize an integer indicator.

- The modle file writed by C++ multiperceptron also can be use by python version.
