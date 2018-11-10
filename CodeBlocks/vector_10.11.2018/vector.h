#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <stdexcept>
#include <initializer_list>
#include "algorithm.h"
template<class T>
struct Vector
{
    using value_type = T;
    using size_type = unsigned long long int;
    using reference = T&;
    using pointer = T*;
    using iterator = T*;
    using difference_type = int;
    using const_reference = const T&;
    using const_pointer = const T*;

    size_type vector_size;
    size_type vector_capacity;
    pointer storage;
    Vector();
    Vector(std::initializer_list<T> l);
    ~Vector();
    void push_back(const T& value);
    void pop_back();
    iterator begin()const;
    iterator end()const;
    reference operator[](size_type index);
    size_type size()const;
    reference at(size_type index);

};

template<class T>
Vector<T>::Vector():vector_capacity(10),vector_size(0),storage(new T [vector_capacity]){}



template<class T>
Vector<T>::Vector(std::initializer_list<T> l)
{
   vector_size = l.size();
   vector_capacity = vector_size * 2;
   storage = new T[vector_capacity];
   stu::copy(l.begin(),l.end(), storage);
}

template<class T>
Vector<T>::~Vector(){delete[] storage;}

template<class T>
void Vector<T>::push_back(const T& value)
{
    storage[vector_size++] = value;
}

template<class T>
void Vector<T>::pop_back()
{
    --vector_size;
}

template<class T>
typename Vector<T>::iterator Vector<T>::begin()const{return storage;}

template<class T>
typename Vector<T>::iterator Vector<T>::end()const{return storage+vector_size;}

template<class T>
typename Vector<T>::reference Vector<T>::operator[](Vector<T>::size_type index)
{
    return storage[index];
}

template<class T>
typename Vector<T>::size_type Vector<T>::size()const
{
    return vector_size;
}

template<class T>
typename Vector<T>::reference Vector<T>::at(Vector<T>::size_type index)
{
    if(index >= vector_size)
    {
        throw std::out_of_range("debil");
    }
}


#endif // VECTOR_H_INCLUDED
