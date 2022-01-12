#include<bits/stdc++.h>
using namespace std;
int prec(char c){
if(c == '^')
return 3;
else if(c=='/'||c=='*')
return 2;
else if(c=='+'||c=='-')
return 1;
else
return -1;
}
void infixToPostfix(string a) {
stack<char>s;
string result;
int i;
for(i=0;i<(a.length());i++) {
    char c=a[i];
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9') {
        result+=c;
    }else{
    while(!s.empty()&&prec(a[i])<=prec(s.top())) {
    result+=s.top();
    s.pop();
    }
    s.push(c);
    }
    }
    while(!s.empty()){
        result+=(s.top());
        s.pop();
    }
    cout<<result;
}
int main(){
    string exp = "x-y/z-k*d";
    infixToPostfix(exp);
    return 0;
}

