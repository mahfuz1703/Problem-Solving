#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<long long> reorderNumbers(int n, const vector<long long>& array) {
    long long firstNumber;
    unordered_map<long long, long long> mapping;
    
    for (long long num : array) {
        if (num % 3 == 0) {
            if (mapping.find(num / 3) != mapping.end()) {
                mapping[num] = num / 3;
            } else {
                firstNumber = num;
            }
        } else {
            if (mapping.find(num * 2) != mapping.end()) {
                mapping[num] = num * 2;
            } else {
                firstNumber = num;
            }
        }
    }
    
    vector<long long> reordered;
    reordered.push_back(firstNumber);
    
    while (reordered.size() < n) {
        long long nextNumber = (reordered.back() % 2 == 0) ? reordered.back() / 3 : reordered.back() * 2;
        reordered.push_back(nextNumber);
    }
    
    return reordered;
}

int main() {
    int n;
    cin >> n;

    vector<long long> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    vector<long long> reorderedArray = reorderNumbers(n, array);

    for (int i = 0; i < n; ++i) {
        cout << reorderedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
