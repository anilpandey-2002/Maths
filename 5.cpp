class Solution
{
public:
  bool judgeSquareSum(int c)
  {
    unsigned a = 0;
    unsigned b = sqrt(c);

    while (a <= b)
    {
      const unsigned sum = a * a + b * b;
      if (sum == c)
        return true;
      if (sum < c)
        ++a;
      else
        --b;
    }

    return false;
  }
}; // 633
// Sum of Square Numbers