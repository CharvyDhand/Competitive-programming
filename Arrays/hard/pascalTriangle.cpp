vector<vector<int>> generate(int numRows) {
    vector<vector<int>> a(numRows);
    for(int i=0;i<numRows;i++){
         a[i].resize(i + 1);
        for(int j=0;j<=i;j++){
            if(j==0 ||j==i){
                a[i][j]=1;
            }else{
        a[i][j]=a[i-1][j-1]+ a[i-1][j];
            }
        }
    }
    return a;
}