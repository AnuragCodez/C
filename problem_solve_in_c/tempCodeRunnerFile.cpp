#include <iostream>
using namespace std;

int main() {

    int j,rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i=1, k=0; i<=rows; ++i,k=0) 
    {
        for(j=1; j<=rows-i; ++j) 
        {
            cout<<"  ";
        }

        while(k != 2*i-1) 
        {
            cout << "* ";
            ++k;
        }
        cout<<endl;
    }    
    return 0;
}