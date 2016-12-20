#include <iostream>
#include <vector>
#include "vectorFunction.h"
using namespace std;

int main(){
vector <int> test;

getInput(test);

printVec(test);

cout << mean(test) << endl;

cout << add(test) <<endl;
return 0;
}
