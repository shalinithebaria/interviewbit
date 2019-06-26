vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int, int> hmap;  
    int size = A.size();
    for(int i=0 ; i<size ; ++i) 
    {
        unordered_map<int, int>::iterator get = hmap.find(B - A[i]);
        // return the vector if we found 2 numbers
        if(get != hmap.end())   return vector<int>{get->second, i+1};
        
        // add the element if its not a duplicate
        if(hmap.find(A[i]) == hmap.end())     hmap[A[i]] = i+1;   
    }
    return vector<int>{};
}
