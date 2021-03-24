#include <iostream>
using namespace std;

bool isPrime(int x){
  int temp = 0;
  int count = 0;
  if(x == 0){
      return false;
  }
  for(int num = 1; num < x; num++){
    if(x % num == 0){
      count++;
    }
  }
  if(count == 1){
    return true;
  }
  return false;
}

int biggestDigit(int x){
  int biggest_num = 0;
  int temp_num = 0;
  while(x != 0){
    temp_num = x%10;
    if(biggest_num < temp_num){
      biggest_num = temp_num;
    }
    x = x / 10;
  }
  return biggest_num;
}

int main(){
    int k = 0;
    int count = 5;
    cout << "Enter a positive integer x greater than 1000: ";
    cin >> k;
    while(k < 1000){
      if(count == 0){
        break;
        return 0;
      }
      cout << "Enter a positive integer x greater than 1000" << "\nYou have ";
      cout << count << " attempts left.";
      cin >> k;
      count--;
    }

    cout << "Biggest digit of x is " << biggestDigit(k) << endl;
    cout << "All prime numbers from 1 to 100\n";
    for(int i = 1; i <= 100; i++){
      if(isPrime(i)){
        cout << i << endl;
      }
    }
    return 0;
}
