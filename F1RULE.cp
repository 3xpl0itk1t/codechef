#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin >> t;
    for( int i ;i<t;i++){
        cin >> x >> y;
        (y == x*1.07 || y < x*1.07)? cout << "YES\n" : cout << "NO\n";
    }
	return 0;
}
