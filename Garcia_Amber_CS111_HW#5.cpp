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
    //Whenever count was equal to x, create a new line.
    //Though in this case I thought modulus was neater
    // count == x
    // Would have been just fine.
    if(count % x == 0){
    cout << endl;
    }
  }
}

int main(){

  printPowers(3);
  return 0;

}
