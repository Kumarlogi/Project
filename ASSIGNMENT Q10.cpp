#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef unsigned long long ull;

typedef pair<int, int> ii;


int main() {

    string s;

    cin>>s;

    int count = 1;

    for (const char c : s) {

        if (c >= 'A' && c <= 'Z')

            ++count;

    }

    cout<<count<<endl;

}


