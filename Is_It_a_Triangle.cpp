/*
Problem Description
Given angles of a possible triangle in degree denoted by integer A, B, and C. Check whether the triangle is valid or not.
Return 1 if it is valid else return 0.

Problem Constraints
1 <= A, B, C <= 180

Input Format
First argument is an integer A.
Second argument is an integer B.
Third argument is an integer C.

Output Format
Return 1 if the angles formed a valid triangle else return 0.
*/
//CODE

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int A,B,C,sum;
    cout<<"Enter the angles:";
    cin>>A>>B>>C;
    sum=A+B+C;
    if(sum==180){
        // cout<<"The given figure is a valid triangle";
        cout<<"1";
    }
    else{
        // cout<<"It is not a valid triangle";
        cout<<"0";
    }
    return 0;
}
