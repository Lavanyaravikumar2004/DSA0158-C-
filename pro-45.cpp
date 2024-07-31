#include <iostream>

using namespace std;

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}}, mat2[2][3] = {{7, 8, 9}, {10, 11, 12}}, result[2][3];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << (result[i][j] = mat1[i][j] + mat2[i][j]) << ' ';
        }
        cout << endl;
    }

    return 0;
}
