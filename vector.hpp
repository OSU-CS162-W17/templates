#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <stdexcept>

template <class T>
class vector {
private:
  T* array;
  unsigned int _size;
  unsigned int _capacity;
public:
  vector();
  ~vector();
  unsigned int size();
  unsigned int capacity();
  void push_back(T& val);
  void reserve(unsigned int n);
  T& at(unsigned int idx);
};

template <class T>
vector<T>::vector() : _size(0), _capacity(0), array(NULL) {}

template <class T>
vector<T>::~vector() {
  delete[] this->array;
}

template <class T>
unsigned int vector<T>::size() {
  return this->_size;
}

template <class T>
unsigned int vector<T>::capacity() {
  return this->_capacity;
}

template <class T>
void vector<T>::push_back(T& val) {
  if (this->_size == this->_capacity) {
    this->reserve(this->_capacity + 1);
  }
  this->array[this->_size++] = val;
}

template <class T>
void vector<T>::reserve(unsigned int n) {
  if (n > this->_capacity) {
    T* new_array = new T[n];
    for (int i = 0; i < this->_size; i++) {
      new_array[i] = this->array[i];
    }
    delete[] this->array;
    this->array = new_array;
    this->_capacity = n;
  }
}

template <class T>
T& vector<T>::at(unsigned int idx) {
  if (idx >= this->_size) {
    throw std::out_of_range("vector idx too large");
  }
  return this->array[idx];
}



#endif
