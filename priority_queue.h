#ifndef PROJECT1_PRIORITY_QUEUE_SOL_H_
#define PROJECT1_PRIORITY_QUEUE_SOL_H_


#include <queue>

namespace project1 {

// The file implements a priority queue whose elements type is specified by T.
//
// The class is a simple wrapper for std::priority_queue. It provides contant
// lookup of the largest element, at the expense of logarithmic insertion and
// extraction. https://en.cppreference.com/w/cpp/container/priority_queue
// describes more details. The class is NOT thread-safe.

template <typename T>
class PriorityQueue {
 private:
  std::priority_queue<T> storage_;

 public:
  PriorityQueue() = default;
  ~PriorityQueue() = default;

  bool Empty() const;
  int Size() const;

  // Returns the head of this priority queue, which is the largest element of
  // T. When empty, it returns nullptr.
  const T* Top() const;

  // Inserts a given T to storage_. Its time complexity is logarithm number of
  // comparisons.
  void Push(const T&);

  // Removes the top element. Its time complexity is logarithm number of
  // comparisons.
  void Pop();
};

}  // namespace project1


#endif  // PROJECT1_PRIORITY_QUEUE_SOL_H_
