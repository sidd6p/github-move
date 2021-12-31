#include <iostream>
#include <string>

using namespace std;

void fastscan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
         c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, q, pos;
    string s, c;
    fastscan(n);
    fastscan(q);
    cin >> s;

    for (int j=0; j < q; j++){
        cin >> pos >> c;
        s.replace(pos-1, 1, c);
        int count = 0;
        for (int i = 0; (i = s.find("abc", i)) != string::npos; i++) {
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}