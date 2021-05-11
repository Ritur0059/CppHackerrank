#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string name, search;
    bool flag;
    
    int pno;
    map <string, int> directory;
    for(int i=0; i<n; i++){
        cin>>name>>pno;
        directory[name]=pno;
    }
    while(cin >> search) {
            if(directory[search]){
                cout<<search<<"="<<directory[search]<<endl;           
            }
        else cout << "Not found\n";
    }
    
}