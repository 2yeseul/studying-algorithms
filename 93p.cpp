// 수행시간 N^2 일 
 
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


