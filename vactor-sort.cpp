#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int el;
        cin>>el;
        v.push_back(el);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    {
        cout<<v.at(j)<<" ";
    } 
    return 0;
}
