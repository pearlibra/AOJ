#include <iostream>
#include <tuple>

#define INF 20000000

using namespace std;

class double_matrix
{
private:

public:
    double_matrix(/* args */);
    ~double_matrix();
};

double_matrix::double_matrix(/* args */)
{
}

double_matrix::~double_matrix()
{
}


std::tuple<int, int> matrix_chain_order(int p[]) {
    int n = sizeof(p)/sizeof(int) - 1;
    int m[n+1][n+1], s[n+1][n+1];
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INF;
            for (int k = i; k <= j-1; k++) {
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[i]*p[i+1];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    return std::forward_as_tuple(m, s);
}


// def MATRIX_CHAIN_ORDER(r):
//     # r - 行列のリスト
//     # m - コストのテーブル, s – 最適なコストの指標となるテーブル
//     n = r.length - 1
//     m = matrix(1...n, 1...n)
//     s = matrix(1...n - 1, 2...n)
//     for i = 1 to n:
//         m[i, i] = 0
//     for l = 2 to n:
//         for i = 1 to n – l + 1:
//             j = i + l–1
//             m[i, j] = ∞
//             for k = i to j – 1:
//                 q = m[i, k] + m[k + 1, j] + ri - 1rkrj
//                 if q < m[i, j]:
//                     m[i, j] = q
//                     s[i, j] = k
//     return m, s


// // # 計算の順序を見る為に、最適な括弧を表示する
// def PRINT_OPTIMAL_PARENS(s, i, j):
//     # 与えられたsから、最適な括弧を出力する
//     if i == j:
//         print "A"(i)
//     else:
//         print "("
//         PRINT_OPTIMAL_PARENS(s, i, s[i, j])
//         PRINT_OPTIMAL_PARENS(s, s[i, j] + 1, j)
//         print ")"
int main() {

}