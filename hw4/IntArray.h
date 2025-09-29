#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>

class IntArray {
private:
int *p;
int size;
public:
IntArray();
IntArray(int s);
~IntArray();
int getSize();
int getValue(int index);
void replace(int index, int value);
void swap(int index_1, int index_2);
void print();


};

#endif 