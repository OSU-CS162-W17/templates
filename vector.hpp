#ifndef VECTOR_HPP
#define VECTOR_HPP

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

#endif
