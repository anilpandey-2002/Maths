class Solution
{
public
  int tribonacci(int n)
  {
    if (n < 2)
      return n;

    int[] a = {0, 1, 1};

    for (int i = 3; i <= n; ++i)
    {
      final int next = a[0] + a[1] + a[2];
      a[0] = a[1];
      a[1] = a[2];
      a[2] = next;
    }

    return a[2];
  }
}
// 1137
//  Tribonacci number