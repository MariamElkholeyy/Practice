#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    string s ;
    cin >> s;
    int n = s.length();
    int arr[100001];
    sort(s.begin() , s.end()) ;
    
    for (int i = 0; i <= s.size(); i++)
    {
        int x = ((s[i] - 0)- 65 );
        arr[x]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i+1])
        {
            int x = ((s[i] - 0)-65 );
            cout << s[i]<<" "<<arr[x]<<endl;
        }
        else if (s[i] == s[i+1]){
           continue;}}

    return 0 ;
}
