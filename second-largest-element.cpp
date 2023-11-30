vector<int> getSecondOrderElements(int n, vector<int> a) {
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
        if(a[i]<mini){
            mini=a[i];
        }
    }
    int x=INT_MAX;
    int y=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>y && a[i]!=maxi){
            y=a[i];
        }
        if(a[i]<x && a[i]!=mini){
            x=a[i];
        }
    }
    vector<int>v;
    v.push_back(y);
    v.push_back(x);
    return v;
    
}
