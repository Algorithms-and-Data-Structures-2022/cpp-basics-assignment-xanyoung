#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int res = (left- right)*(left-right);
    return res;

  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    int tmp = mask & (1 << bit_pos);
    tmp = tmp >> bit_pos;
    if ((tmp % 2) == 0) return false;
    return true;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int max_res = 0;

    if(left > middle) {
      max_res = left;
    } else {
      max_res = middle;
    }
    if(max_res < right) {
      max_res = right;
    }
    return max_res;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if ((left == 0) || (right == 0)) {
      return;
    }

    int temp = *left;

    *left = *right;
    *right = temp;

  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if ((arr == nullptr) || (length <= 0)) {
      return 0;
    }
    int count = 0;
    for (int i = 0; i<length; ++i){
      count += arr[i];
    }
    if ((count > 0) || (count < 0)) {
      return count;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if ((arr == nullptr) || (length <= 0)) {
      return nullptr;
    }
    int max_res = 0;

    for (int i=0;i<length;++i) {
      if (arr[max_res] < arr[i]) {
        max_res = i;
      }
    }
    return &arr[max_res];

  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

      if (length <= 0) {
        return nullptr;
      }
      int *arr = new int[length];
      for (int i = 0; i < length; ++i) {
        arr[i] = init_value;
      }
      std::cout << '[';
      bool isFirst = true;
      for (int i = 0; i < length; ++i) {
        if (isFirst) {
          std::cout << arr[i];
        } else {
          std::cout << ", " << arr[i];
        }
        isFirst = false;
      }
      std::cout << ']';
      return arr;
    }

  // Task 8
    int *clone_arr(int *arr_in, int length) {

      if ((arr_in == 0) || (length <= 0)) {
        return nullptr;
      }
      int *arr = new int[length];
      std::copy(arr_in,arr_in+length,arr);
      std::cout << '[';
      bool isFirst = true;
      for (int i = 0; i < length; ++i) {
        if(isFirst){
          std::cout << arr[i];
        } else {
          std::cout << ", " << arr[i];
        }
        isFirst = false;
      }
      std::cout << ']';
      return arr;
    }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else {
      if (length <= 0) {
        os << "Invalid argument: length\n";
      } else {
        if (k <= 0) {
          os << "Invalid argument: k\n";
        } else {
          for (int i=0;i<length;i+=k){
            os << arr[i] << "\t";
           }
        }
      }
    }

  }

}  // namespace assignment
