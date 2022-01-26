#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int count = 0;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if(s[i] == s[i+1]){
            count++;
            if (count >= 6)
                break;
        }

        else{
            count = 0;
        }
    }
    if (count>=6)
        cout << "YES";
    else
        cout << "NO";
}