// 실수 배열 A가 존재할 때 각 위치에서 M-이동평균 구하기
#include <iostream>
#include <vector>
using namespace std;

// 각 위치에서 지난 M개 측정치의 합을 구하고 이를 M으로 나눈다

vector<double> averageOfmoving(const vector<double>& a, int M) {
    int N = a.size();
    vector<double>avg(N-M+1);

    for(int i=M-1; i<N; i++){
        int partitionSum=0;
        for(int j=0;j<M; j++) {
            partitionSum+=a[j];
            partitionSum/=3;
       }
        
    }

}