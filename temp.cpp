#include <iostream>
#include <vector>
using namespace std;

vector<int> subset;

void search(int k){
    if(k == k+1){

    }else{
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
}