// 1D Array Homework 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //first homework, NOT FINSIHED!!!!!!!!
   //Tes comment ignore
    int nums[100];
    int n;
    cout << "Please enter a number >= 3\n";
    cin >> n;
    for (int cnt = 0; cnt < n; ++cnt) {
        cout << "Please enter a number";
        cin >> nums[cnt];
    }
    int answer[3];
    int answerCnt = 0;
    answer[0] = nums[0];
    answer[1] = nums[1];
    answer[2] = nums[2];
    for (int cnt = 0; cnt < n; ++cnt) {
        for (; answerCnt < 2; ++answerCnt) {
            if (nums[cnt] < answer[answerCnt] && nums[cnt] != answer[0] && nums[cnt] != answer[1] && nums[cnt] != answer[2]) {
                answer[answerCnt] = nums[cnt];
                answerCnt = 3;
            }
        }
        answerCnt = 0;
    }
    cout << answer[0] << answer[1] << answer[2];
   


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
