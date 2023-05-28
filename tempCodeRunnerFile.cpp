#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(53);
    arr.push_back(535);
    arr.push_back(534);
    arr.push_back(532);
    print(arr);
    return 0;
}