// Ben Smith
// L2.cpp
// 9/29/2017

#include <iostream>

using namespace std;

void pointerFun(int x, int bigValue);
void referenceFun(int &reference, int& bigReference);

int main(){
  cout << "Welcome to pointer fun" << endl;
  int x = 100;
  int ref1 = 20;
  int ref2 = 10;

  pointerFun(x,200);
  cout << endl;
  referenceFun(ref1,ref2);

  cout << "Goodbye" << endl;
  return 0;
}

void pointerFun(int x, int bigValue){
  int* iPtr;
  
  iPtr = &x;

  cout <<"Value: "<< x <<" Address: " << &x << endl;
  cout <<"Value: "<< *iPtr <<" Address: " << iPtr << endl;

  cout << ++x <<" "<< x++ << endl;
  cout << x++ <<" "<< ++x << endl;

  *iPtr = bigValue;
  cout << x << endl;

  cout << ++(*iPtr) << (*iPtr)++ << endl;
  cout << (*iPtr)++ << ++(*iPtr) << endl;

  cout << x << endl;
  cout << *iPtr << endl;
  
}
void referenceFun(int &reference, int& bigReference){
  int* iPtr;

  iPtr = &reference;

  cout <<"Value: "<< reference <<" Address: " << &reference << endl;
  cout <<"Value: "<< *iPtr <<" Address: " << iPtr << endl;

  cout << ++reference  <<" "<< reference++ << endl;
  cout << reference++ <<" "<< ++reference << endl;

  *iPtr = bigReference;
  cout << reference << endl;

  cout << ++(*iPtr) << (*iPtr)++ << endl;
  cout << (*iPtr)++ << ++(*iPtr) << endl;

  cout << reference << endl;
  cout << *iPtr << endl;
}

