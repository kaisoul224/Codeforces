#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for (int i=0; i<s1.size(); ++i) {s1[i]=tolower(s1[i]);}
    for (int i=0; i<s2.size(); ++i) {s2[i]=tolower(s2[i]);}
    if (s1<s2){
        printf("-1");
    }else {
        if (s1==s2) printf("0"); else printf("1");
    }
    return 0;
}
