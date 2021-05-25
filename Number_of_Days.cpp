/*
Problem Description:-
Given a month number, A and an year, B, return the number of days in that month (take leap years into account).

Problem Constraints:-
1 <= A <= 12
1 <= B <= 109

Input Format:-
First argument is an integer A denoting the month number.
Second argument is an intege B denoting the year.

Output Format:-
Return an integer denoting the count of days in the given month.
*/
//CODE
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int A,B;
    cout<<"Enter the month number:";
    cin>>A;
    cout<<"Enter the year:";
    cin>>B;
    if(A==2)
            {
            if((B%400==0)|| (B%4==0 && B%100!=0))
                cout<<"No of days is 29";
            else
                cout<<"No od days is 28";
            }
    else if(A==1 || A==3 || A==5 || A==7 || A==8 || A==10 ||A==12)
        cout<<"No of days is 31";
    else
        cout<<"No of days is 30"  ;  

}
