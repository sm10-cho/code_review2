#include "priority_queue_sol.h"

#include <cstddef>

namespace project1 {

template <>
bool PriorityQueue<int>::Empty() const {
  return storage_.empty();
}

template <>
int PriorityQueue<int>::Size() const {
  return storage_.size();
}

template <>
const int* PriorityQueue<int>::Top() const {
  if (Empty()) {
    return nullptr;
  }
  return &storage_.top();
}

template <>
void PriorityQueue<int>::Pop() {
  if (!Empty()) {
    storage_.pop();
  }
}

template <>
void PriorityQueue<int>::Push(const int& val) {
  storage_.push(val);
}

}  // namespace project1
