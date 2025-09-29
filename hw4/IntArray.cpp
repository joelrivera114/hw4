#include "IntArray.h"
#include <cassert>

IntArray::IntArray():size(5), p(new int[5]{})
{}
IntArray::IntArray(int s):size(s), p(new int[s]{} ) 
{}
IntArray::~IntArray()
{delete [] p;}
int IntArray::getSize()
{return size;}
int IntArray::getValue(int index)
{
    assert(index >= 0 && index < size);
    return p[index];}

void IntArray::replace(int index, int value)
{
    assert(index >= 0 && index < size);
    p[index]=value;
}
void IntArray::swap(int index_1, int index_2)
{
    assert(index_1>=0 && index_1<size);
    assert(index_2>=0 && index_2<size);
    int temp = p[index_1];
    p[index_1]=p[index_2];
    p[index_2] = temp;
}
void IntArray::print()
{
    for(int i = 0; i<size;++i){
        std::cout<<p[i]<<" ";
    }
    std::cout<<std::endl;
}