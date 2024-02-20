/*
This lab will go over functions as well as
getting us to initialize and operate a few
*/
#include <iostream>
using namespace std;

/** sumOfThree
 * @brief returns the sum of x, y, and z
 * 
 * @param x : (int)
 * @param y : (int)
 * @param z : (int)
 * @return int
*/

/** division
 * @brief returns x / y
 * 
 * @param x : (double)
 * @param y : (double)
 * @return double
*/

/** isGreaterThan
 * @brief returns whether x is greater than y
 * 
 * @param x : (double)
 * @param y : (int)
 * @return true: x is greater than y
 * @return false : x is less than or equal to y
*/

/** select
 * @brief output the statements based on func_type
 *  func_type : output
 *  "sum"   : "The sum is "
 *  "division"   : "The quotient is "
 *  "comparison"   : "The first value being greater than the second value is "
 *  All other phrases: "Invalid function type\n"
 * @param func_type : (string)
 * @return string
*/

/** myPrint
 * @brief Calls select() to print out the output with the correct prompt
 * 
 * @tparam T : (int,double, or string) output of sum, division, or isGreater Than
 * @param func_type : (string)
 * @param output
*/

template <typename T>
void myPrint(string func_type, T output){
    cout << select(func_type) << output << endl;
}

