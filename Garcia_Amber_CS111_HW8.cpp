#include <iostream>
#include <cmath>
using namespace std;

int temp = 0;
long basetemp = 10;
void subSix(int n){
// For larger numbers that exceed 1mil, I think this recursive loop
// May crash.
if(n > 0 && n < 10 && n/basetemp == 0){
    n = n - 1;
    //cout << n << " FIRST FIRST" << endl;
  }

  if(n%basetemp < 10){
    basetemp*=10;
    n = n - pow(10,temp);
    //cout << n << " First if" << endl;

  }
  if((n % basetemp) / (basetemp/10) >= 6){
    temp++;
    basetemp*=10;
    n = n - pow(10,temp);
    //cout << n << " Second if" << endl;
    if(n / (basetemp/10) != 0 ){
      //cout << n << " Third if" << endl;
      subSix(n);
    }else{
      cout << n << endl;
      return;
    }
  }else{
    //cout << n << " Last if" << endl;
    temp++;
    basetemp*=10;
    if(n/(basetemp/10) == 0){
      cout << n << endl;
      return;
    }
    subSix(n);
  }}

int evens(int n){

}



int firstTwo(int n){
  if(n < 100){
    return (n%10) + (n/10);
  }
  return firstTwo(n/10);
}

int main(){
  subSix(456789);
  int temp2 = 0;
  temp2 = evens(234567);
  int temp = 0;
  temp = firstTwo(8325);
  cout << temp << endl;
  cout << temp2 << endl;
}
/*
string temp = n + "";
if(n % 10 >= 6){
  subSix(n / 10);
  cout << n << endl;
}else{

}
if(n / 10 == 0){
  return;
}
*/
