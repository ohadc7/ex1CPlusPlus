a.out: main.o AddElement.o BinaryTree.o
	g++ -g -Wall -std=c++11 main.o AddElement.o BinaryTree.o

main.o: main.cpp
	g++ -g -Wall -c main.cpp

AddElement.o: AddElement.cpp AddElement.h
	g++ -g -Wall -c AddElement.cpp

BinaryTree.o: BinaryTree.cpp BinaryTree.h
	g++ -g -Wall -c BinaryTree.cpp
