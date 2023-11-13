#include <iostream>
using namespace std;
bool isPerfectNumber(int number) {
    if (number <= 1) {
        return false;
    }

    int sum = 1;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}

bool isPerfectSquare(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}
void main(){
    int n;
    cout << "Nhap vao mot so nguyen ";
    cin >> n;
    if (isPerfectNumber(n)) {
        cout << n << " là số hoàn thiện." << endl;
    } else {
        cout << n << " không phải là số hoàn thiện." << :endl;
    }

    if (isPerfectSquare(n)) {
        cout << n << " là số chính phương." << std::endl;
    } else {
        cout << n << " không phải là số chính phương." << std::endl;
    }
}