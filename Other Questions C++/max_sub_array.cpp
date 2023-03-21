vector<int> Solution::maxset(vector<int> &A) {
    int n = A.size();
    vector<int> result;
    int max_so_far = INT_MIN;
    int fi = 0, li = -1, i = 0;
    int max_end_here = 0;
    while(i < n)
    {
        max_end_here += A[i];
        
        if(max_end_here > max_so_far)
        {
            max_so_far = max_end_here;
            li = i+1;
        }
        if(A[i] < 0)
        {
            max_end_here = 0;
            
        }
        i++;
    }
    for(i=fi; i<li; i++)
    {
        result.push_back(A[i]);
    }
    return result;
}