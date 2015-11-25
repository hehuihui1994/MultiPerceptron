# MultiPerceptron

####Introduction
> MultiPerceptron is an implementation of Multiclass perceptron. Using one-vs-all
> method to make multiclass classification. And using the moudle cPickle to save
> and load perceptron model from file.

####Files
Here are two files. One is the source code of MultiPerceptron, the other one is the introduction of data format. 

- MultiPercetron.py<br>
Python 2.7 code of Multiclass Perceptron.

- DataFormat.txt<br>
  Introduction of data format.


####Updates
updates on 2015-11-25:

- Use numpy.matrix to store weights matrix of perceptron.

- When vector is sparse and it's dimensionality is very big, using function *predict2()* to calculate dot product of two vector is much more effective than using *predict()*