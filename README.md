# Data-Structures-From-Scratch
A collection of fundamental data structure implementations from scratch in C++, built as part of my computer science and competitive programming journey.

# 🚀 Custom Vector Implementation (`myVector<T>`)

This is a custom implementation of a **dynamic array (vector)** in C++ using templates.  
It mimics the behavior of `std::vector` but is written from scratch for educational purposes.

---

## ✅ Advantages of `myVector<T>`
- **Dynamic resizing**: Automatically doubles capacity when full.
- **Template-based**: Works with any data type (`int`, `double`, `string`, custom classes, etc.).
- **Memory management**: Implements copy constructor, assignment operator, and move semantics.
- **Utility methods**: Includes `push_back`, `pop_back`, `insert`, `erase`, `remove`, `find`, `at`, and `operator[]`.
- **Safer access**: Bounds-checking in `at()` method to prevent invalid access.
- **Performance-oriented**: Amortized `O(1)` insertion at the end.

---

## ⏱️ Time Complexity Analysis

| Operation            | Complexity | Notes |
|----------------------|------------|-------|
| `push_back()`        | **O(1) amortized** | Occasional **O(n)** when resizing |
| `pop_back()`         | **O(1)** | Just decrements size |
| `at(index)`          | **O(1)** | Direct array access with bounds check |
| `operator[]`         | **O(1)** | Direct access (unsafe if out of range) |
| `insert(index, val)` | **O(n)** | Shifts elements to make space |
| `prepend(val)`       | **O(n)** | Same as insert at `index=0` |
| `erase(index)`       | **O(n)** | Shifts elements after index |
| `remove(val)`        | **O(n)** | Linear scan to filter values |
| `find(val)`          | **O(n)** | Linear search |
| `is_empty()`         | **O(1)** | Simple check |
| `get_size()`         | **O(1)** | Returns size |
| `get_capacity()`     | **O(1)** | Returns capacity |

---

## 🛠️ Example Usage
```cpp
#include <iostream>
#include "myVector.h" // if separated into a header file

int main() {
    myVector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Size: " << v.get_size() << "\n";       // 3
    std::cout << "Capacity: " << v.get_capacity() << "\n"; // 16 (initial)
    std::cout << "Element at index 1: " << v.at(1) << "\n"; // 20

    v.insert(1, 99); // Insert 99 at index 1
    std::cout << "After insert: " << v.at(1) << "\n"; // 99

    v.pop_back(); // Removes last element
    std::cout << "New size: " << v.get_size() << "\n"; // 3
}
