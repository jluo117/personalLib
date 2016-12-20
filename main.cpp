#include <iostream>
#include <vector>
#include "vectorFunction.h"
#include "area.h"
using namespace std;

int main(){
vector <int> test;

getInput(test);

printVec(test);

cout << mean(test) << endl;

cout << add(test) <<endl;

rectangle(5,10);

triangle (10 ,2);
return 0;
}
