#include <iostream>
using namespace std;
bool isPerfectSquare(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}
void main(){
    int n;
    cout << "Nhap vao mot so nguyen ";
    cin >> n;
    if (isPerfectSquare(n)) {
        cout << n << " là số chính phương." << std::endl;
    } else {
        cout << n << " không phải là số chính phương." << std::endl;
    }
}