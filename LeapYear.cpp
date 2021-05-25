/*Given an integer A representing an year, Return 1 if it is a leap year else return 0.
A year is leap year if the following conditions are satisfied:
-> Year is multiple of 400.
-> Year is multiple of 4 and not multiple of 100.*/

/*
Problem Constraints
1 <= A <= 109
Input Format
First and only argument is an integer A
Output Format
Return 1 if it is a leap year else return 0
*/

//CODE:
int Solution::solve(int A) {

    if (A % 4 == 0) {
        if (A % 100 == 0) {
            if (A % 400 == 0)
                return 1 ; 
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;

    return 0;
}


