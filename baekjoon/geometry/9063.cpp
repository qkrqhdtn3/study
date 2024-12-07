#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int arr[100001];
    int xMin, xMax;
    int yMin, yMax;
    int minVal, maxVal;
    int x, y;
    int area;

    minVal = -10001;
    maxVal = 10001;
    xMin = maxVal;
    xMax = minVal;
    yMin = maxVal;
    yMax = minVal;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> x >> y;
        if(x < xMin)
        {
            xMin = x;
        }
        if(x > xMax)
        {
            xMax = x;
        }
        if(y < yMin)
        {
            yMin = y;
        }
        if(y > yMax)
        {
            yMax = y;
        }
    }
    area = (xMax - xMin) * (yMax - yMin);

    cout << area;
    return 0;
}
