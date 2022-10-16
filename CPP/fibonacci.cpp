#include <iostream>
using namespace std;

int main() {
    int i=0, x=1, y=1, n, xTem;
    
    cout << "Enter range: ";
    cin >> n;
    
    for (i; i<n; i++){
        printf("%d + ",x);
        xTem = x+y;
        x = y;
        y = xTem;
    }
}
