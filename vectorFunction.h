#include <iostream>
#include <vector>
using namespace std;


void getInput(vector <int>& UserVec){
    int userNum;
    while (cin >> userNum){
        UserVec.push_back(userNum);
    }
    return;
}

void printVec (const vector <int>&  UserVec){
    for (int i=0; i <UserVec.size(); i++)
    {
        cout << UserVec.at(i) << ' ';
    }
    cout <<endl;
    return;
}

double mean (const vector <int>& UserVec){
    int userTotal = 0;
    for (int i=0; i<UserVec.size(); i++){
        userTotal = userTotal + UserVec.at(i);
    }
    return userTotal / UserVec.size();
}

int add (const vector <int>& UserVec){
    int userTotal =0;
    for (int i = 0; i<UserVec.size(); i++){
        userTotal = userTotal + UserVec.at(i);
    }
    return userTotal;
}
