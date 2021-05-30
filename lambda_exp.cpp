#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=1; i<10; ++i) {
        v.push_back(i);
    }
    int evenCount = 0;
    for_each(v.begin(), v.end(), [&evenCount](int n) {
        cout<<n;
        if(n%2 == 0) {
            cout<<" is even "<<endl;
            ++evenCount;
        } else {
            cout<<" is odd "<<endl;
        }
    });
    return 0;
}
