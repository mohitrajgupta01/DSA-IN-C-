#include <iostream>
using namespace std;
bool linearsearch(int a[],  int target) {

    for(int i=0; i<5; i++) {
        if(target==a[i]) {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[10];

    cout << "enter elements";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "which iten you want find";
    int item;
    cin >> item;

    int ans=linearsearch(a, item);

    cout <<ans;
}
