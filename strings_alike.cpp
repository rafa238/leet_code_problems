#include<bits/stdc++.h>
using namespace std;

bool existeEnVector(vector<char> v, char busqueda) {
    return find(v.begin(), v.end(), busqueda) != v.end();
}

bool halvesAreAlike(string s) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> vowels1, vowels2;
    int fstHalve = s.length()/2;
    for(int i=0; i<fstHalve; i++){
        if( existeEnVector(vowels, tolower(s[i]))){
            vowels1.push_back(tolower(s[i]));
        }
    }
    for(int i=s.length()-fstHalve; i<s.length(); i++){
        if( existeEnVector(vowels, tolower(s[i]))){
            vowels2.push_back(tolower(s[i]));
        }
    }
    return vowels1.size() == vowels2.size();
}

int main(){
    string s;
    cin>>s;
    cout<<halvesAreAlike(s);
    return 0;
}