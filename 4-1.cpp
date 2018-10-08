<<<<<<< HEAD:4-1.cpp
﻿// 수행시간 N^2 일 때 
=======
// 수행시간 N^2 일 
>>>>>>> 306d7eeba6209f7f4ff13670d637c03393e9a7e9:93p.cpp
 
int majority1(vector<int>& A) {
    int N = A.size();
    int majority = -1, majorityCount = 0;
    for (int i=0; i<N; i++){
        int V=A[i], count = 0;
        for(int j=0;j<N;j++){
            if(A[j]==V) ++count;
        }
    if(count>majorityCount) {
        majorityCount=count;
        majority=V;
        }
    }
 //cout<<majority;
 return majority;
}


