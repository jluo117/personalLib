#include <iostream>
#include <vector>
#include "vectorFunction.h"
#include "area.h"
using namespace std;

int main(){
vector <int> test;

getInput(test);

printVec(test);

swapLocation(test);

printVec(test);

cout << min(test) <<endl;
return 0;
}
