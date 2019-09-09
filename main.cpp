#include <iostream>
#include <string>
using namespace std;

int main(){
  int x = 10;
  cout << x << endl;
  cout << "hello world!" << endl;
  cout << "first of all what is your name?" << endl;

  string name = "";

  cin >> name;
  
  cout << "Hello " + name + " how are you?" << endl;
  cout << "well if i am correct you are in 8th grade" << endl;
  
  bool cpp = true;
  
  if (cpp){
    cout << "cpp is indeed true";
  }

  else {
    cout << "cpp is false :l";
  }
}