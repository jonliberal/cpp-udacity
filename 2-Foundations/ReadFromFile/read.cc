#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
  // declare input file object
  ifstream f;
  f.open("listofbooks.txt");
  // alternatively ifstream f("listofbooks.txt");
  string line;
  cout << "List of Books:" << endl;
  while(getline(f, line)) cout << "- " <<  line << endl;
}
