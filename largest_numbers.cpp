/* finding the largest of three numbers */

#include <iostream>
using namespace std;

int main(void)
{
  /* variables for three numbers */
  int number1, number2, number3;

  /* save the largest number here */
  int max;

  /* read three numbers */
  cin >> number1;
  cin >> number2;
  cin >> number3;

  /* assume that the first number is the largest */
  /* we'll check it soon */
  max = number1;

  /* check if the 2nd value is the largest */
  if (number2 > max)
    max = number2;

  /* check if the third value is the largest */
  if (number3 > max)
    max = number3;

  /* print the result */
  cout << "The largest number is " << max << endl;

  /* finish the program */
  return 0;
}
