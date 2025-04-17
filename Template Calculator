#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    
    T findMax() {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }
    
    T add() {
        return a + b;
    }
    
    T sub() {
        return a - b;
    }
    
    T multiply() {
        return a * b;
    }
    
    T division() {
        if (b != 0) {
            return a / b;
        } else {
            return 0;
        }
    }
};

int main() {
    Calculator<int> c1(4, 5);
    cout << "Max: " << c1.findMax() << endl;
    cout << "Sum: " << c1.add() << endl;

    Calculator<int> c2(10, 5);
    cout << "Subtraction: " << c2.sub() << endl;

    Calculator<float> c3(7.5,1.5);
    cout << "Division: " << c3.division() << endl;

    Calculator<float> c4(6, 4);
    cout << "Multiplication: " << c4.multiply() << endl;

    return 0;
}
