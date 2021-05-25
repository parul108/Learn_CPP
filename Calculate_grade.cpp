/*
Problem Description

Given an integer A denoting percentage of a student, calculate the grade according to the below rules:
If A >= 90, grade A.
If A >= 80, grade B.
If A >= 70, grade C.
If A >= 60, grade D.
If A >= 50, grade E.
Else grade will be F.
Return a string consisting of single character denoting the grade.

Problem Constraints
0 <= A <= 100

Input Format
First and only argument is an integer A.

Output Format
Return a string consisting of single character denoting the grade.
*/
//CODE
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int A;
    cout<<"Enter marks : ";
    cin>>A;
    if(A>=90){
        cout<<"Grade is A";
    }
    else if(A>=80 && A<=89){
        cout<<"Grade is B";
    }
    else if(A>=70 && A<=79){
        cout<<"Grade is C";
    }
    else if(A>=60 && A<=69){
        cout<<"Grade is D";
    }
    else if(A>=50 && A<=59){
        cout<<"Grade is E";
    }
    else if(A>=0 && A<=49){
        cout<<"Grade is F";
    }
}
