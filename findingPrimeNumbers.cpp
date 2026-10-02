#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    vector<int> primes;

    int n;
    cout << "Enter the number of elements for the vector: ";
    cin >> n;

    for (int k = 0; k <= n; k++) {
        vec.push_back(k);
    }
    

    for (int i = 2; i < vec.size(); ++i) {
        bool isPrime = true;

        // Check vec[i] against all smaller numbers in the vector
        for (int j = 2; j < i; ++j) {
            int remainder = vec[i] % vec[j];

            if (remainder == 0) {
                isPrime = false;
                break; // Stop checking further divisors once a factor is found
            }
        }

        if (isPrime) {
            primes.push_back(vec[i]);
        }
    }

    cout << "\nPrimes found: ";
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}