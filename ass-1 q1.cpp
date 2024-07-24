#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    double sum = 0.0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    if (n > 0) {
        average = sum / n;
        cout << "Average = " << average << std::endl;
    } else {
        cout << "No elements to calculate average.\n";
    }

    return 0;
}
