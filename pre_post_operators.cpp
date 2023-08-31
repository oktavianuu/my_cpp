#include <iostream>

using namespace std;
int main(void){
  int i, j;

  i = 4;
  j = 2 * i++;
  i = 2 * --j;

  cout << "i =" << i << endl;
  cout << "j =" << j << endl;
  return 0;
}
