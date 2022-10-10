
#include <iostream>
using namespace std;

int main() {
    
    int num,a;
    bool isPrime = true;
   
    cout << "Enter number: ";
    cin >> num;
    
    for(a=num-1; a>=2; a--){
        //printf("%d\n",a);
        if(num%a==0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime){
        printf("%d is a prime number",num);
    } else {
        printf("%d is not a prime number",num);
    } 
}
