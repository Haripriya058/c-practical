#include <iostream>
using namespace std;
  
float Division(float num, float den)
{
    return (num / den);
} 
  
int main()
{
    float numerator = 12.5;
    float denominator = 0;
    float result;
  
    result = Division(numerator, denominator);
    cout << "The quotient of 12.5/0 is "
         << result << endl;
  
} 
