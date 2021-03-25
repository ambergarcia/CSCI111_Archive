//Amber Garcia HW # 5

#include <iostream>
#include <cmath>
using namespace std;

void printPowers (int x) {
  int count = 0;
  if (x < 0 || x > 5) {
    cout << "Invalid argument\n";
    return;
  }
  for(int pos = 0; pos <= 11; pos++ ){

    cout << pow(x,pos);
    cout << "\t";
    count++;
    
    if(count % x == 0){
    cout << endl;
    }
  }
}

int main(){

  printPowers(3);
  return 0;

}
