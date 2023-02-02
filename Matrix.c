//// matrix minors, cofactors,
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 4
//
//void getMinor(int mat[N][N], int temp[N][N], int p, int q, int n)
//{
//    int i = 0, j = 0;
//
//    for (int row = 0; row < n; row++)
//    {
//        for (int col = 0; col < n; col++)
//        {
//            if (row != p && col != q)
//            {
//                temp[i][j++] = mat[row][col];
//
//                if (j == n - 1)
//                {
//                    j = 0;
//                    i++;
//                }
//            }
//        }
//    }
//}
//
//int determinant(int mat[N][N], int n)
//{
//    int D = 0;
//
//    if (n == 1)
//        return mat[0][0];
//
//    int temp[N][N];
//    int sign = 1;
//
//    for (int f = 0; f < n; f++)
//    {
//        getMinor(mat, temp, 0, f, n);
//        D += sign * mat[0][f] * determinant(temp, n - 1);
//        sign = -sign;
//    }
//
//    return D;
//}
//
//void getCofactor(int mat[N][N], int temp[N][N], int n)
//{
//    int sign = 1;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            getMinor(mat, temp, i, j, n);
//
//            sign = ((i + j) % 2 == 0) ? 1 : -1;
//
//            printf("Cofactor[%d][%d] = %d * %d = %d\n", i, j, sign, determinant(temp, n - 1), sign * determinant(temp, n - 1));
//        }
//    }
//}
//
//int main()
//{
//    int mat[N][N] = {{1, 0, 2, -1},
//                     {3, 0, 0, 5},
//                     {2, 1, 4, -3},
//                     {1, 0, 5, 0}};
//
//    int temp[N][N];
//
//    getCofactor(mat, temp, N);
//
//    return 0;
//}
