#include<iostream>
using namespace std;

class pattern {
    public:
        int n, i, j;
        pattern() {
            cout << "Enter number of rows: ";
            cin >> n;
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++) {
                    cout << "j" << " ";
                }
                cout << "\n";
            }
        }

        ~pattern() {
            cout << "Object is destroyed." << endl;
        }
};

int main() {
    pattern p;
    return 0;
}

