#include <iostream>

int gcd_fast(int a, int b) {
    int max,min,t;
    if(a>=b)
    {
        max = a;
        min = b;
    }
    else
    {
        max=b;
        min=a;
    }
    while(min!=0)
    {
        t=min;
        min = max%min;
        max=t;
    }
    return max;



}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
