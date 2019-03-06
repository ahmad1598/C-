

#include <iostream>

using namespace std;

int main()
{
//    for(int i = 2; i <= 50; i+=2)
//    {
//        cout << i << " ";
//    }
//    cout << endl;

    string grade;
    int score;
    cout << "Please Enter your grade: ";
    cin >> score;

    if (score >= 94 )
    {
        grade = "A";
        cout << grade;
    } else if(score >= 90)
    {
        grade = "A-";
        cout << grade;
    } else if (score >= 87)
    {
        grade = "B+";
        cout << grade;
    } else if (score >= 84)
    {
        grade = "B";
        cout << grade;
    } else if( score >= 80)
    {
        grade = "B-";
        cout << grade;
    }else if (score >= 77)
    {
        grade = "C+";
        cout << grade;
    } else if (score >= 74)
    {
        grade = "C";
        cout << grade;
    } else if (score >= 70)
    {
        grade = "C-";
        cout << grade;
    } else if (score >= 67)
    {
        grade = "D+";
        cout << grade;
    } else if (score >= 64)
    {
        grade = "D";
        cout << grade;
    } else if (score >= 60)
    {
        grade = "D-";
        cout << grade;
    } else if( score <= 59)
    {
        grade = "E";
        cout << grade;
    }

}
