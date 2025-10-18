//
// Created by zied on 9/27/25.
//

#ifndef LC_1_MYVECTOR_H
#define LC_1_MYVECTOR_H
#include <stdexcept>

template <typename T>
class myVector {
 private:
  T *arr;        // Pointer to dynamically allocated array
  int size;      // Number of items in the vector
  int capacity;  // Number of items it can hold

  void resize() {
    capacity *= 2;
    T *nw_arr = new T[capacity];
    for (int i = 0; i < size; ++i) {
      nw_arr[i] = arr[i];
    }
    delete[] arr;
    arr = nw_arr;
  };  // Utility function to handle resizing

 public:
  myVector() : arr(nullptr), size(0), capacity(16) {  // Default Constructor
    arr = new T[capacity]();  // Value-initialize elements
  };

  ~myVector() {
    // Destructor
    delete[] arr;
  };

  myVector(const myVector &other) : size(other.size), capacity(other.capacity) {
    // Copy constructor
    arr = new T[capacity];
    for (int i = 0; i < size; ++i) {
      arr[i] = other.arr[i];
    }
  };

  myVector &operator=(const myVector &other) {
    // Copy assignment operator
    if (this == &other) return *this;  // Self-assignment check
    delete[] arr;                      // Free existing memory

    size = other.size, capacity = other.capacity;
    arr = new T[capacity];
    for (int i = 0; i < size; ++i) {
      arr[i] = other.arr[i];
    }

    return *this;
  };

  myVector(myVector &&other) noexcept
      : size(other.size), capacity(other.capacity), arr(other.arr) {
    // Move constructor
    other.arr = nullptr;
    other.size = 0;
    other.capacity = 0;
  };

  myVector &operator=(myVector &&other) noexcept {
    // Move assignment operator
    if (this == &other) return *this;
    delete[] arr;
    arr = other.arr;
    other.arr = nullptr;
    size = other.size;
    other.size = 0;
    capacity = other.capacity;
    other.capacity = 0;

    return *this;
  };

  void push_back(const T &element) {
    // Add element at the end of array
    if (size == capacity) resize();
    arr[size++] = element;
  };

  int pop_back() {
    // Remove last element and return it;
    if (size == 0) throw std::out_of_range("Index out of bounds");
    return arr[--size];
  };

  int get_size() const { return size; };

  int get_capacity() const { return capacity; };

  bool is_empty() const { return size == 0; }

  T at(int idx) {
    if (idx >= size) throw std::out_of_range("Index out of bounds");
    return arr[idx];
  }

  void insert(int idx, T item) {
    if (size == capacity) resize();
    for (int i = size; i > idx; --i) {
      arr[i] = arr[i - 1];
    }
    arr[idx] = item;
    size++;
  }
  void prepend(T item) { insert(0, item); }

  void erase(int idx) {
    if (idx >= size) throw std::out_of_range("Index out of bounds");
    for (int i = idx; i < size - 1; ++i) {
      arr[i] = arr[i + 1];
    }
    size--;
  }

  void remove(const T &item) {
    int new_size = 0;
    for (int i = 0; i < size; ++i) {
      if (arr[i] != item) {
        arr[new_size] = arr[i];
        new_size++;
      }
    }
    size = new_size;
  }

  int find(const T &item) {
    for (int i = 0; i < size; ++i) {
      if (arr[i] == item) {
        return i;
      }
    }
    return -1;
  }
  T &operator[](int idx) {
    if (idx >= size) throw std::out_of_range("Index out of bounds");
    return arr[idx];
  };
};

#endif  // LC_1_MYVECTOR_H
