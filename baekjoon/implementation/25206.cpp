#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string subjectName, gradeStr;
    double credit, grade;
    double creditSum, majorGPA;
//    double ans;

    creditSum = 0;
    majorGPA = 0;
    for(int i = 0 ; i < 20 ; i++)
    {
        cin >> subjectName >> credit >> gradeStr;
        if(gradeStr[0] == 'P')
        {
            continue;
        }
        else if(gradeStr[0] == 'A')
        {
            grade = 4;
        }
        else if(gradeStr[0] == 'B')
        {
            grade = 3;
        }
        else if(gradeStr[0] == 'C')
        {
            grade = 2;
        }
        else if(gradeStr[0] == 'D')
        {
            grade = 1;
        }
        else if(gradeStr[0] == 'F')
        {
            grade = 0;
        }
        if(gradeStr[1] == '+')
        {
            grade += 0.5;
        }
        creditSum += credit;
        majorGPA += credit * grade;
    }
    majorGPA = majorGPA / creditSum;

    cout << majorGPA;
}
