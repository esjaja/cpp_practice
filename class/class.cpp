#include<iostream>
#include<vector>
template <size_t M, size_t N, typename T>
class Matrix {
    public:        
        Matrix() {
            val.resize(M, std::vector<T>(N, 0));
            rowLength = M;
            columnLength = N;
        }
        Matrix(T x) {
            val.resize(M, std::vector<T>(N, x));
            rowLength = M;
            columnLength = N;
        }

        void printMatrix() {
            for(auto &i : val) {
                for (auto &j : i) {
                    std::cout << j << " ";
                }
                std::cout << std::endl;
            }
        }
    private:
        std::vector<std::vector<T>> val;
        size_t rowLength;
        size_t columnLength;
};


int main(){
    Matrix<10, 5, int> matrix(2);
    matrix.printMatrix();

    Matrix<3, 10, double> matrix2(5.5);
    matrix2.printMatrix();
}