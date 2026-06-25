#include<iostream>
using namespace std;

int main() {
    int row, col, x;

    for(int i =1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cin>>x;
            if(x ==1) {
                row =i;
                col=j;
            }
        }
    }
    int moves = abs(3 - row) + abs(3 - col);
    cout << moves;
    return 0;
    
}
