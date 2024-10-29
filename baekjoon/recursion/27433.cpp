#include <iostream>

using namespace std;

long long recursion(int num)
{
    if(num > 1){
//        return recursion(num - 1) * num;
        return num * recursion(num - 1);
    } else {
        return 1;
    }
}
int main()
{
    int inputValue;
    cin >> inputValue;
//    cout << sizeof(recursion(inputValue)) << endl;
    cout << recursion(inputValue) << endl;
    return 0;
}
