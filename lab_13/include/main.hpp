#ifndef MAIN_HPP
#define MAIN_HPP

#include <algorithm>
#include <cstddef>
#include <limits>
#include <memory>
#include <stdexcept>

#define DEF_CAP 10

template <typename T> class MyVector {
private:
  size_t _size;
  size_t _capacity;
  std::unique_ptr<T[]> _arr;

  int _resize(int n, bool smaller = false) { // returns new size
    if (n <= _capacity && !smaller) {
      return n;
    }

    _capacity = n + 10;
    std::unique_ptr<T[]> tmp(new T[_capacity]);
    std::copy(_arr.get(), _arr.get() + _size, tmp.get());
    _arr.swap(tmp);
    return n;
  }

public:
  /* begin constructors */
  MyVector() : _capacity(10), _size(0), _arr(new T[_capacity]) {}

  MyVector(size_t n, const T &val = T())
      : _capacity(n > DEF_CAP ? n : DEF_CAP), _size(n), _arr(new T[_capacity]) {
    std::fill(_arr, _arr + _size, val);
  }

  MyVector(const std::initializer_list<T> &il)
      : _size(il.size()), _capacity(_size > DEF_CAP ? _size : DEF_CAP),
        _arr(new T[_capacity]) {
    int i = 0;
    for (auto it = il.begin(); it != il.end(); it++) {
      _arr[i++] = *it;
    }
  }
  /* end constructors */

  /* begin capacity methods */
  size_t size() const { return _size; }

  size_t max_size() const { return std::numeric_limits<size_t>::max(); }

  void resize(size_t n, const T &val = T()) {
    if (n <= _size) {
      _size = n;
      return; // don't zero out items
    }

    if (n > _capacity) {
      _resize(n);
    }

    std::fill(_arr.get() + _size, _arr.get() + n, val);
    _size = n;
  }

  size_t capacity() const { return _capacity; }

  bool empty() const { return !_size; }

  void reserve(size_t n) {
    if (n > max_size()) {
      throw std::length_error("n");
    }

    _resize(n);
  }

  void shrink_to_fit() { _resize(_size, true); }
  /* end capacity methods */

  /* begin element access methods */
  MyVector &operator=(const MyVector &other) { // copy assignment
    if (this != &other) {
      if (other.size() > _size) {
        _resize(other.size());
      }
      _size = other.size();
      std::copy(other.data(), other.data() + _size, _arr.get());
    }

    return *this;
  }

  MyVector &operator=(MyVector &&other) noexcept { // move assignment
    if (this != &other) {
      _arr.swap(other._arr);
      _size = std::exchange(other._size, 0);
    }

    return *this;
  }

  T &operator[](size_t pos) { return _arr[pos]; }
  const T &operator[](size_t pos) const { return _arr[pos]; }

  T &at(size_t n) {
    if (n > _size - 1) {
      throw std::out_of_range("n");
    }

    return operator[](n);
  }

  const T &at(size_t n) const {
    if (n > _size - 1) {
      throw std::out_of_range("n");
    }

    return operator[](n);
  }

  T &front() { return operator[](0); }
  const T &front() const { return operator[](0); }

  T &back() { return operator[](_size - 1); }
  const T &back() const { return operator[](_size - 1); }

  T *data() noexcept { return _arr.get(); }
  const T *data() const noexcept { return _arr.get(); }
  /* end element access method */

  /* begin modifier methods */
  void clear() noexcept { _size = 0; }

  // not implemented: insert()
  // not implemented: emplace()
  // not implemented: erase()

  void assign(size_t n, const T &val) {
    _size = _resize(n);
    std::fill_n(_arr.get(), n, val);
  }

  /* FIXME disabled until we protect this with std::enable_if
  template <typename InputIt>
  assign(InputIt first, InputIt last) {
    _size = last - first;
    std::copy(first, last, _arr.get());
  }

  void assign(std::initializer_list<T> ilist) {
    assign(ilist.begin(), ilist.end());
  }
  */

  void push_back(const T &val) {
    _resize(_size + 1);
    operator[](_size++) = val;
  }

  template <typename... Args> T &emplace_back(Args &&... args) {
    return operator[](_size++) = std::move(T{std::forward<Args>(args)...});
  }

  void pop_back() { _size--; }

  void swap(MyVector &other) noexcept { _arr.swap(other._arr); }

  /* end modifier methods */

  // not implemented: operator==() operator!=() operator<() operator<=()
  // operator>() operator>=() std::erase() std::erase_if() std::swap()
};

#endif // MAIN_HPP
