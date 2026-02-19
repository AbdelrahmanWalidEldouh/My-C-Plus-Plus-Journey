#include <iostream>
#include <vector>
using namespace std;

int main() {

    const size_t size{20};
    vector<int> values;

    for (size_t i{0}; i < size; ++i) {

        int number;

        do {
            cout << "Enter number " << i + 1 << ": ";
            cin >> number;
        } while (number < 10 || number > 100);

        bool isDuplicate{false};

        for (size_t j{0}; j < values.size(); ++j) {
            if (values[j] == number) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            values.push_back(number);
        }
        else {
            cout << "Duplicate number.\n";
        }
    }

    cout << "\nUnique values entered:\n";

    for (size_t i{0}; i < values.size(); ++i) {
        cout << values[i] << " ";
    }

    cout << endl;
}
