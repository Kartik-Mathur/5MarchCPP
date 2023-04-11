#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int heights[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    int  leftmax[1000];
    leftmax[0] = 0;
    int mx = heights[0];
    for (int i = 0; i < n; i++)
    {
        leftmax[i] = mx;
        mx = max(heights[i], mx);
    }
    for (int i = 0; i < n; i++)
    {
        cout << leftmax[i] << " ";
    }
    int  rightmax[1000];
    leftmax[n - 1] = 0;
    mx = heights[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = mx;
        mx = max(heights[i], mx);
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << rightmax[i] << " ";
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int chotimax = min(leftmax[i], rightmax[i]);
        if (chotimax - heights[i] > 0) {
            ans = ans + (chotimax - heights[i]);

        }
        cout << endl;
        cout << ans;


    }




}