#include <iostream>
using namespace std;

class MatrixCipher {
private:
    int arr[100];
    int mat[100][100];
    int enmat[100][100];
    int n, m;

public:
    void inputArray() {
        cout << "Enter size of arr: ";
        cin >> n;
        cout << "Arr is:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void createMatrix() {
        cout << "Enter size of matrix: ";
        cin >> m;

        cout << "Encrypted Matrix is:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] = arr[j + i * m];
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void encryptMatrix() {
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    void decryptMatrix() {
        cout << "Decrypted matrix is:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                arr[j + i * m] = mat[i][j];
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void inputEncryptedMatrix() {
        cout << "Enter Decrypted matrix:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cin >> enmat[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {
                swap(enmat[i][j], enmat[j][i]);
            }
        }
    }

    void displayEncryptedMatrix() {
        cout << "Encrypted matrix:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cout << enmat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixCipher cipher;
    cipher.inputArray();
    cipher.createMatrix();
    cipher.encryptMatrix();
    cipher.decryptMatrix();
    cipher.inputEncryptedMatrix();
    cipher.displayEncryptedMatrix();

    return 0;
}
