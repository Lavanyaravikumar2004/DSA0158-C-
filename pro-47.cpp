#include <iostream>

using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sumPrimary = 0, sumSecondary = 0;

    for (int i = 0; i < 3; ++i) {
        sumPrimary += mat[i][i];
        sumSecondary += mat[i][2 - i];
    }

    cout << sumPrimary << ' ' << sumSecondary << endl;
    return 0;
}
