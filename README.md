<div align="center">

# 🚀 Data Structures From Scratch

### Master Data Structures by Building Them in Modern C++

[![C++](https://img.shields.io/badge/C++-17-blue.svg?style=flat&logo=c%2B%2B)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](http://makeapullrequest.com)
[![Stars](https://img.shields.io/github/stars/mahmoudabozied4/Data-Structures-From-Scratch.svg?style=social)](https://github.com/mahmoudabozied4/Data-Structures-From-Scratch)

*A collection of fundamental data structures implemented from scratch in C++, built as part of my computer science and competitive programming journey.* 💡

[Quick Start](#-quick-start) • [Features](#-features) • [Data Structures](#-implemented-data-structures) • [Examples](#-usage-examples) • [Contributing](#-contributing)

---

</div>

## 📖 About This Project

This repository showcases **production-quality implementations** of fundamental data structures built from scratch in **Modern C++**. Each implementation is:

- ✨ **Built from scratch** - No STL data structures used internally (except for educational comparison)
- 🎯 **Template-based** - Works with any data type using C++ templates
- 📚 **Well documented** - Every method explained with complexity analysis
- 🧪 **Educational** - Mimics STL behavior for learning purposes
- ⚡ **Performance-focused** - Efficient algorithms with amortized analysis
- 🔍 **Memory-safe** - Proper resource management with RAII principles
- 💼 **Interview-ready** - Covers common technical interview topics

> **Philosophy:** *"You don't truly understand a data structure until you've implemented it yourself."*

---

## 🎯 Why This Project?

### Learning Goals
- 🧠 **Deep Understanding** - See exactly how STL containers work under the hood
- 💪 **Build Confidence** - Implement complex structures step by step
- 🎓 **Ace Interviews** - Master the concepts top companies test for
- 📈 **Write Better Code** - Understand time/space tradeoffs
- 🔥 **Level Up** - Transform from user to implementer

### What Makes This Different?
- ✅ **Real implementations** - Not pseudocode, actual working C++ code
- ✅ **Modern C++** - Uses templates, move semantics, and best practices
- ✅ **Complexity analysis** - Big O notation for every operation
- ✅ **Memory management** - Proper constructors, destructors, copy/move
- ✅ **Production patterns** - Mimics STL behavior and naming conventions

---

## ✨ Features

<table>
<tr>
<td width="50%" align="center">
<h3>🎯 From Scratch</h3>
Every implementation built without using STL containers internally. Pure, educational code that reveals the magic behind the abstractions.
</td>
<td width="50%" align="center">
<h3>📊 Complexity Analysis</h3>
Detailed Big O analysis for every operation. Understand the tradeoffs and make informed decisions in your own code.
</td>
</tr>
<tr>
<td width="50%" align="center">
<h3>🔧 Template-Based</h3>
Generic implementations using C++ templates. Works with any data type - primitives, objects, or custom classes.
</td>
<td width="50%" align="center">
<h3>📚 Educational</h3>
Clear code structure, comprehensive comments, and real-world examples. Perfect for learning and teaching.
</td>
</tr>
<tr>
<td width="50%" align="center">
<h3>⚡ Performance</h3>
Efficient algorithms with amortized analysis. Understand why std::vector resize strategy works.
</td>
<td width="50%" align="center">
<h3>🛡️ Memory Safe</h3>
Proper copy constructors, assignment operators, destructors, and move semantics. No memory leaks!
</td>
</tr>
</table>

---

## 🚀 Quick Start

### Prerequisites

```bash
# C++ Compiler with C++11 or higher support
g++ --version     # GCC 4.8+
clang++ --version # Clang 3.3+

# Or use any modern C++ compiler (MSVC 2015+, etc.)
```

### Compilation

```bash
# Clone the repository
git clone https://github.com/mahmoudabozied4/Data-Structures-From-Scratch.git
cd Data-Structures-From-Scratch

# Compile a simple program
g++ -std=c++17 -O2 main.cpp -o program

# Run
./program
```

### Quick Example - Dynamic Array

```cpp
#include <iostream>
#include "myVector.h"

int main() {
    // Create a dynamic array of integers
    myVector<int> vec;
    
    // Add elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    // Display size and capacity
    std::cout << "Size: " << vec.get_size() << "\n";        // 3
    std::cout << "Capacity: " << vec.get_capacity() << "\n"; // 16
    
    // Access elements
    std::cout << "Element at index 1: " << vec.at(1) << "\n"; // 20
    std::cout << "Using operator[]: " << vec[0] << "\n";      // 10
    
    // Insert element
    vec.insert(1, 99);  // Insert 99 at index 1
    std::cout << "After insert: " << vec.at(1) << "\n"; // 99
    
    // Remove last element
    vec.pop_back();
    std::cout << "New size: " << vec.get_size() << "\n"; // 3
    
    // Search for element
    int index = vec.find(99);
    if (index != -1) {
        std::cout << "Found 99 at index: " << index << "\n";
    }
    
    // Remove specific value
    vec.remove(99);
    
    // Iterate through vector
    for (size_t i = 0; i < vec.get_size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}
```

---

## 📊 Implemented Data Structures

### ✅ Currently Implemented

#### 1. Dynamic Array (myVector)

**Status:** ✅ Complete

A custom implementation of `std::vector` that demonstrates:
- Dynamic resizing with capacity doubling strategy
- Template-based generic programming
- Memory management (Rule of Five)
- Random access with bounds checking

<details>
<summary><b>View Detailed Documentation</b></summary>

### Features

- ✨ **Dynamic resizing** - Automatically doubles capacity when full
- 🎯 **Template-based** - Works with any data type (`int`, `double`, `string`, custom classes)
- 🔧 **Memory management** - Implements copy constructor, assignment operator, and move semantics
- 📦 **Utility methods** - `push_back`, `pop_back`, `insert`, `erase`, `remove`, `find`, `at`, `operator[]`
- 🛡️ **Safer access** - Bounds-checking in `at()` method
- ⚡ **Performance-oriented** - Amortized `O(1)` insertion at the end

### Time Complexity Analysis

| Operation | Complexity | Notes |
|-----------|-----------|-------|
| `push_back()` | `O(1)` amortized | Occasional `O(n)` when resizing |
| `pop_back()` | `O(1)` | Just decrements size |
| `at(index)` | `O(1)` | Direct array access with bounds check |
| `operator[]` | `O(1)` | Direct access (unsafe if out of range) |
| `insert(index, val)` | `O(n)` | Shifts elements to make space |
| `prepend(val)` | `O(n)` | Same as insert at index 0 |
| `erase(index)` | `O(n)` | Shifts elements after index |
| `remove(val)` | `O(n)` | Linear scan to filter values |
| `find(val)` | `O(n)` | Linear search |
| `is_empty()` | `O(1)` | Simple check |
| `get_size()` | `O(1)` | Returns size |
| `get_capacity()` | `O(1)` | Returns capacity |

### Complete API Reference

```cpp
template<typename T>
class myVector {
public:
    // Constructors & Destructor
    myVector();                              // Default constructor
    myVector(const myVector& other);         // Copy constructor
    myVector(myVector&& other) noexcept;     // Move constructor
    ~myVector();                             // Destructor
    
    // Assignment operators
    myVector& operator=(const myVector& other);      // Copy assignment
    myVector& operator=(myVector&& other) noexcept;  // Move assignment
    
    // Element access
    T& operator[](size_t index);             // Unchecked access
    const T& operator[](size_t index) const; // Const unchecked access
    T& at(size_t index);                     // Bounds-checked access
    const T& at(size_t index) const;         // Const bounds-checked access
    
    // Modifiers
    void push_back(const T& value);          // Add element at end
    void pop_back();                         // Remove last element
    void insert(size_t index, const T& value); // Insert at position
    void prepend(const T& value);            // Insert at beginning
    void erase(size_t index);                // Remove at position
    void remove(const T& value);             // Remove all instances
    void clear();                            // Remove all elements
    
    // Capacity
    size_t get_size() const;                 // Number of elements
    size_t get_capacity() const;             // Allocated capacity
    bool is_empty() const;                   // Check if empty
    void reserve(size_t new_capacity);       // Reserve capacity
    
    // Operations
    int find(const T& value) const;          // Find first occurrence
    void print() const;                      // Print all elements
};
```

### Implementation Highlights

**Capacity Doubling Strategy:**
```cpp
void resize() {
    capacity = (capacity == 0) ? 16 : capacity * 2;
    T* new_data = new T[capacity];
    
    // Copy existing elements
    for (size_t i = 0; i < size; ++i) {
        new_data[i] = data[i];
    }
    
    delete[] data;
    data = new_data;
}
```

**Move Semantics:**
```cpp
myVector(myVector&& other) noexcept 
    : data(other.data), size(other.size), capacity(other.capacity) {
    other.data = nullptr;
    other.size = 0;
    other.capacity = 0;
}
```

</details>

---

### 🔄 Coming Soon

#### Linear Data Structures
- [ ] **Singly Linked List** - Node-based sequential structure
- [ ] **Doubly Linked List** - Bidirectional linked structure
- [ ] **Circular Linked List** - Loop-back structure
- [ ] **Stack** - LIFO structure (array and linked implementations)
- [ ] **Queue** - FIFO structure (circular buffer implementation)
- [ ] **Deque** - Double-ended queue
- [ ] **Priority Queue** - Heap-based priority ordering

#### Tree Structures
- [ ] **Binary Search Tree** - Ordered binary tree
- [ ] **AVL Tree** - Self-balancing BST
- [ ] **Red-Black Tree** - Balanced BST with colors
- [ ] **B-Tree** - Multi-way search tree
- [ ] **Heap** - Min/Max heap (complete binary tree)
- [ ] **Trie** - Prefix tree for strings
- [ ] **Segment Tree** - Range query optimization
- [ ] **Fenwick Tree (BIT)** - Binary indexed tree

#### Hash-Based Structures
- [ ] **Hash Table** - Key-value pairs with chaining
- [ ] **Hash Set** - Unique elements with open addressing
- [ ] **Bloom Filter** - Probabilistic membership testing

#### Graph Structures
- [ ] **Graph (Adjacency List)** - Efficient for sparse graphs
- [ ] **Graph (Adjacency Matrix)** - Efficient for dense graphs
- [ ] **Weighted Graph** - Edges with weights
- [ ] **Directed Graph** - One-way edges

#### Specialized Structures
- [ ] **LRU Cache** - Least Recently Used cache
- [ ] **LFU Cache** - Least Frequently Used cache
- [ ] **Disjoint Set (Union-Find)** - Track disjoint sets
- [ ] **Skip List** - Probabilistic balanced structure
- [ ] **Circular Buffer** - Fixed-size ring buffer

---

## 💻 Usage Examples

### Example 1: Working with Different Data Types

```cpp
#include <iostream>
#include <string>
#include "myVector.h"

int main() {
    // Integer vector
    myVector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    
    // String vector
    myVector<std::string> names;
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");
    
    // Double vector
    myVector<double> prices;
    prices.push_back(19.99);
    prices.push_back(29.99);
    prices.push_back(39.99);
    
    // Print all
    std::cout << "Numbers: ";
    numbers.print();
    
    std::cout << "Names: ";
    names.print();
    
    std::cout << "Prices: ";
    prices.print();
    
    return 0;
}
```

### Example 2: Custom Class with myVector

```cpp
#include <iostream>
#include <string>
#include "myVector.h"

class Student {
private:
    std::string name;
    int id;
    double gpa;
    
public:
    Student(std::string n, int i, double g) 
        : name(n), id(i), gpa(g) {}
    
    void print() const {
        std::cout << "Student{name: " << name 
                  << ", id: " << id 
                  << ", gpa: " << gpa << "}\n";
    }
    
    // For myVector::remove() to work
    bool operator==(const Student& other) const {
        return id == other.id;
    }
};

int main() {
    myVector<Student> students;
    
    // Add students
    students.push_back(Student("Alice", 101, 3.8));
    students.push_back(Student("Bob", 102, 3.5));
    students.push_back(Student("Charlie", 103, 3.9));
    
    // Access and print
    for (size_t i = 0; i < students.get_size(); ++i) {
        students[i].print();
    }
    
    // Insert a new student at position 1
    students.insert(1, Student("Diana", 104, 4.0));
    
    std::cout << "\nAfter insertion:\n";
    for (size_t i = 0; i < students.get_size(); ++i) {
        students[i].print();
    }
    
    return 0;
}
```

### Example 3: Performance Testing

```cpp
#include <iostream>
#include <chrono>
#include "myVector.h"

int main() {
    myVector<int> vec;
    
    // Measure push_back performance
    auto start = std::chrono::high_resolution_clock::now();
    
    for (int i = 0; i < 1000000; ++i) {
        vec.push_back(i);
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Pushed 1,000,000 elements in " 
              << duration.count() << " ms\n";
    std::cout << "Final size: " << vec.get_size() << "\n";
    std::cout << "Final capacity: " << vec.get_capacity() << "\n";
    
    // Number of resizes = log2(1000000 / 16) ≈ 16 resizes
    std::cout << "Approximate resizes: " 
              << (int)std::log2(vec.get_capacity() / 16) << "\n";
    
    return 0;
}
```

### Example 4: Copying and Moving

```cpp
#include <iostream>
#include "myVector.h"

myVector<int> createVector() {
    myVector<int> temp;
    for (int i = 0; i < 5; ++i) {
        temp.push_back(i * 10);
    }
    return temp; // Move semantics kicks in
}

int main() {
    // Copy construction
    myVector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    
    myVector<int> vec2 = vec1; // Copy constructor
    vec2.push_back(3);
    
    std::cout << "vec1 size: " << vec1.get_size() << "\n"; // 2
    std::cout << "vec2 size: " << vec2.get_size() << "\n"; // 3
    
    // Move construction
    myVector<int> vec3 = createVector(); // Move constructor
    std::cout << "vec3 size: " << vec3.get_size() << "\n"; // 5
    
    // Copy assignment
    myVector<int> vec4;
    vec4 = vec1; // Copy assignment
    std::cout << "vec4 size: " << vec4.get_size() << "\n"; // 2
    
    return 0;
}
```

---

## 📈 Big O Complexity Visualization

### Time Complexity Comparison

```
╔════════════════════════════════════════════════════════════╗
║                    TIME COMPLEXITY                         ║
╠════════════════════════════════════════════════════════════╣
║                                                            ║
║  Excellent:  O(1)        ████                              ║
║  Great:      O(log n)    ████████                          ║
║  Good:       O(n)        ████████████████                  ║
║  Fair:       O(n log n)  ████████████████████              ║
║  Bad:        O(n²)       ████████████████████████          ║
║  Horrible:   O(2ⁿ)       ████████████████████████████      ║
║  Terrible:   O(n!)       ████████████████████████████████  ║
║                                                            ║
╚════════════════════════════════════════════════════════════╝
```

### myVector Operations Growth

```
n = 1000 elements

push_back():   1 operation    (amortized)   ■
at():          1 operation                  ■
find():        1000 operations              ■■■■■■■■■■■■■■■
insert():      1000 operations              ■■■■■■■■■■■■■■■
remove():      1000 operations              ■■■■■■■■■■■■■■■
```

---

## 🛠️ Project Structure

```
Data-Structures-From-Scratch/
│
├── myVector.h                    # Dynamic Array implementation
├── main.cpp                      # Example usage and tests
├── README.md                     # This file
├── LICENSE                       # MIT License
│
├── docs/                         # Documentation (coming soon)
│   ├── complexity_analysis.md
│   ├── memory_management.md
│   └── implementation_notes.md
│
├── examples/                     # More examples (coming soon)
│   ├── basic_usage.cpp
│   ├── custom_types.cpp
│   └── performance_test.cpp
│
└── tests/                        # Test suite (coming soon)
    ├── test_myVector.cpp
    └── CMakeLists.txt
```

---

## 🎓 Key Concepts Demonstrated

### 1. Dynamic Memory Management

```cpp
// Proper allocation and deallocation
T* data = new T[capacity];
// ... use data ...
delete[] data;
```

### 2. Copy Semantics (Deep Copy)

```cpp
// Copy constructor - creates independent copy
myVector(const myVector& other) {
    size = other.size;
    capacity = other.capacity;
    data = new T[capacity];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];  // Deep copy
    }
}
```

### 3. Move Semantics (Efficient Transfer)

```cpp
// Move constructor - transfers ownership
myVector(myVector&& other) noexcept 
    : data(other.data), size(other.size), capacity(other.capacity) {
    other.data = nullptr;  // Leave other in valid state
    other.size = 0;
    other.capacity = 0;
}
```

### 4. Template Programming

```cpp
// Works with any type T
template<typename T>
class myVector {
    T* data;  // Can be int, double, string, or custom class
    // ...
};
```

### 5. Amortized Analysis

**Why does push_back have O(1) amortized time?**

```
Capacity doubling: 1 -> 2 -> 4 -> 8 -> 16 -> 32 -> ...

To insert n elements:
- n insertions
- Resizes at: 1, 2, 4, 8, 16, ..., n
- Copy operations: 1 + 2 + 4 + 8 + ... + n ≈ 2n

Total operations: n + 2n = 3n = O(n)
Average per insertion: O(n) / n = O(1) amortized
```

### 6. RAII (Resource Acquisition Is Initialization)

```cpp
myVector<int> vec;     // Constructor allocates
vec.push_back(42);     // Use resource
// Destructor automatically deallocates when vec goes out of scope
```

---

## 🔬 Understanding the Implementation

### Why Capacity Doubling?

```cpp
// Starting capacity: 16
// Sequence: 16 -> 32 -> 64 -> 128 -> 256 -> ...

// Why not triple (x3)?
// - More memory waste
// - Fewer resizes don't offset memory cost

// Why not +16?
// - O(n²) total time for n insertions
// - Example: 1M elements = ~62,500 resizes!

// Doubling gives:
// - O(1) amortized time
// - Reasonable memory overhead
// - Only log₂(n) resizes
```

### Memory Layout

```
Capacity: 8, Size: 5

┌───┬───┬───┬───┬───┬───┬───┬───┐
│ 10│ 20│ 30│ 40│ 50│ ? │ ? │ ? │
└───┴───┴───┴───┴───┴───┴───┴───┘
  0   1   2   3   4   5   6   7

Used: ████████████████████████
Free: ────────────────

After push_back(60):
┌───┬───┬───┬───┬───┬───┬───┬───┐
│ 10│ 20│ 30│ 40│ 50│ 60│ ? │ ? │
└───┴───┴───┴───┴───┴───┴───┴───┘

After push_back(70), push_back(80), push_back(90):
Resize triggered! New capacity: 16
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│ 10│ 20│ 30│ 40│ 50│ 60│ 70│ 80│ 90│ ? │ ? │ ? │ ? │ ? │ ? │ ? │
└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
```

---

## 📚 Learning Resources

### Understanding Dynamic Arrays
- **[Dynamic Array - Wikipedia](https://en.wikipedia.org/wiki/Dynamic_array)**
- **[std::vector - cppreference](https://en.cppreference.com/w/cpp/container/vector)**
- **[Amortized Analysis](https://en.wikipedia.org/wiki/Amortized_analysis)**

### C++ Concepts Used
- **[Templates](https://en.cppreference.com/w/cpp/language/templates)**
- **[RAII](https://en.cppreference.com/w/cpp/language/raii)**
- **[Move Semantics](https://en.cppreference.com/w/cpp/language/move_constructor)**
- **[Rule of Five](https://en.cppreference.com/w/cpp/language/rule_of_three)**

### Books
1. **[Effective Modern C++](https://www.oreilly.com/library/view/effective-modern-c/9781491908419/)** - Scott Meyers
2. **[C++ Primer](http://www.informit.com/store/c-plus-plus-primer-9780321714114)** - Lippman, Lajoie, Moo
3. **[Data Structures and Algorithm Analysis in C++](https://www.pearson.com/us/higher-education/program/Weiss-Data-Structures-and-Algorithm-Analysis-in-C-4th-Edition/PGM148299.html)** - Mark Allen Weiss

---

## 🤝 Contributing

Contributions are welcome! Whether it's:

- 🐛 Bug fixes
- ✨ New data structure implementations
- 📚 Documentation improvements
- 🧪 Test cases
- 💡 Optimization suggestions

### How to Contribute

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/LinkedList`)
3. **Implement** your feature with clear comments
4. **Test** thoroughly
5. **Commit** your changes (`git commit -m 'Add LinkedList implementation'`)
6. **Push** to the branch (`git push origin feature/LinkedList`)
7. **Open** a Pull Request

### Contribution Guidelines

```cpp
// ✅ Good: Clear naming, comments, complexity analysis
/**
 * Insert element at specific position
 * Time Complexity: O(n) - must shift elements
 * Space Complexity: O(1) - in-place operation
 */
void insert(size_t index, const T& value) {
    if (index > size) throw std::out_of_range("Index out of bounds");
    // ... implementation ...
}

// ❌ Bad: No comments, unclear naming
void ins(int i, T v) {
    // ... implementation ...
}
```

### What to Implement Next?

Vote for the next data structure by creating an issue or checking existing ones:

- 🔥 **Linked List** - Most requested
- 📊 **Stack** - Foundation for many algorithms
- 🌳 **Binary Search Tree** - Classic tree structure
- 🗺️ **Hash Table** - Essential for fast lookups

---

## 🐛 Known Issues & Limitations

### Current Limitations

1. **No iterators yet** - Will add STL-style iterators soon
2. **Basic exception safety** - Will improve exception guarantees
3. **No allocator support** - Uses global new/delete
4. **No C++20 concepts** - Will add when migrating to C++20

### Planned Improvements

- [ ] Add iterator support (begin(), end(), rbegin(), rend())
- [ ] Implement emplace() and emplace_back()
- [ ] Add strong exception safety guarantees
- [ ] Support custom allocators
- [ ] Add constexpr support where possible
- [ ] Comprehensive test suite with Google Test
- [ ] Benchmark comparisons with std::vector
- [ ] CMake build system

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2025 Mahmoud Abozied

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction...
```

---

## 🌟 Show Your Support

If this project helped you learn or prepare for interviews:

- ⭐ **Star** this repository
- 🔄 **Fork** and experiment with your own implementations
- 🐛 **Report** issues or bugs
- 🤝 **Contribute** new data structures
- 📢 **Share** with fellow programmers
- 💬 **Discuss** in the issues section

---

## 📬 Contact

**Mahmoud Abozied**

- 🐙 GitHub: [@mahmoudabozied4](https://github.com/mahmoudabozied4)
- 💼 LinkedIn: [Connect with me](https://www.linkedin.com/in/mahmoudabozied4)
- 📧 Email: mahmoudabozied4@gmail.com

---

<div align="center">

### 💡 Remember

> *"The journey of a thousand data structures begins with a single array."* - Ancient C++ Proverb

**Happy Coding in Modern C++!** 🚀

---

<sub>Built with ❤️ as part of my CS and competitive programming journey</sub>

<sub>⭐ Star this repo if you found it helpful!</sub>

---

## 📊 Progress Tracker

```cpp
namespace Progress {
    const int IMPLEMENTED = 1;
    const int PLANNED = 24;
    const double COMPLETION = (IMPLEMENTED / 25.0) * 100; // 4%
    
    std::cout << "Journey: " << IMPLEMENTED << "/" << (IMPLEMENTED + PLANNED) 
              << " data structures implemented\n";
    std::cout << "Let's build the rest together! 💪\n";
}
```

**[⬆ Back to Top](#-data-structures-from-scratch)**

</div>
