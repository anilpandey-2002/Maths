//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
class Solution {
 public:
  int addDigits(int num) {
    return 1 + (num - 1) % 9;
  }
};
