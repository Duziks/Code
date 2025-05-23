#include <iostream>
#include <cmath>

using namespace std;

// 向量叉积
void crossProduct(double v1[], double v2[], double result[]) {
    result[0] = v1[1] * v2[2] - v1[2] * v2[1];
    result[1] = v1[2] * v2[0] - v1[0] * v2[2];
    result[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

// 向量点积
double dotProduct(double v1[], double v2[]) {
    return v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
}

// 向量模长
double vectorLength(double v[]) {
    return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}

// 计算两条空间直线的距离
double lineDistance(double A[], double B[], double C[], double D[]) {
    double v1[3] = {B[0] - A[0], B[1] - A[1], B[2] - A[2]};
    double v2[3] = {D[0] - C[0], D[1] - C[1], D[2] - C[2]};
    double r[3] = {C[0] - A[0], C[1] - A[1], C[2] - A[2]};

    // 计算方向向量的叉积
    double crossV[3];
    crossProduct(v1, v2, crossV);
    double crossLength = vectorLength(crossV);

    // 若叉积模长为 0，说明直线共面
    if (crossLength == 0) {
        // 计算 r 在 v1 上的投影是否与 v1 平行
        double crossR[3];
        crossProduct(v1, r, crossR);
        return vectorLength(crossR) / vectorLength(v1);
    }

    // 计算 r 与叉积的点积并除以叉积的模长
    return fabs(dotProduct(crossV, r)) / crossLength;
}
void work()
{
    double A[3], B[3], C[3], D[3];

    for (int i = 0; i < 3; i++) cin >> A[i];
    for (int i = 0; i < 3; i++) cin >> B[i];
    for (int i = 0; i < 3; i++) cin >> C[i];
    for (int i = 0; i < 3; i++) cin >> D[i];

    double distance = lineDistance(A, B, C, D);
    printf("%.3f\n",distance);
    return;

}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        work();
    }
    return 0;
}
