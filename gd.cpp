#include <iostream>
#include <cmath>
using namespace std;

// Function
double f(double x) {
    return (x + 3) * (x + 3);
}

// Derivative
double derivative(double x) {
    return 2 * (x + 3);
}

int main() {
    double x = 2;
    double lr, epsilon;
    int max_iter;

    cout << "Enter learning rate: ";
    cin >> lr;

    cout << "Enter tolerance: ";
    cin >> epsilon;

    cout << "Enter maximum iterations: ";
    cin >> max_iter;

    int i;

    for (i = 0; i < max_iter; i++) {
        double grad = derivative(x);
        double new_x = x - lr * grad;

        // Check convergence
        if (abs(new_x - x) < epsilon) {
            x = new_x;
            cout << "Converged after " << i + 1 << " iterations." << endl;
            break;
        }

        x = new_x;
    }

    if (i == max_iter) {
        cout << "Maximum iterations reached." << endl;
    }

    cout << "Minimum x: " << x << endl;
    cout << "Minimum y: " << f(x) << endl;

    return 0;
}