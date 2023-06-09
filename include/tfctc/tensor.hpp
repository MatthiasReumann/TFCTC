#pragma once

#include "marray.hpp"

namespace tfctc
{
  template <class T>
  class Tensor : public MArray::marray_view<T>
  {
  public:
    Tensor(std::initializer_list<size_t> lengths, T *ptr)
        : MArray::marray_view<T>(lengths, ptr, MArray::COLUMN_MAJOR) {}
    Tensor(std::vector<size_t> lengths, T *ptr)
        : MArray::marray_view<T>(lengths, ptr, MArray::COLUMN_MAJOR) {}
  };
};