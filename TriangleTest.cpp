// Use namespace std to avoid needing to write things like std::cout
using namespace std;
// Include iostream for input / output interfacing
#include <iostream>
// Needed for error checking if inputs are actually ints
#include <cstdlib>

// Function to check if input is an integer
is_int(float val){
    // Take in a float value, then declare a "check" as an int type which is equal to your input
    int check = val;
    // Now create a remainder, and divide the int version of the input by the actual
    float remainder = check / val;

    // If the answer is 1, meaning that the two divided evenly and thus they were both ints, return 1
    if (remainder == 1){
        return 1;
    // Otherwise, return 0
    }else{
        return 0;
    }
}

// Main function
int main(){
    // Introduction + instruction to input data
    cout << "Hello and welcome to Tony's Triangle Test. " << endl << "Please submit three integers that represent the lengths of a triangle: \n";
    // Declare fundamental int types for user input.
    float first_input, second_input, third_input;
    // Declare placeholders to determine if the user input was an integer or not.
    int is_first_input_int, is_second_input_int, is_third_input_int;

    // Take in the three user inputs.
    cin >> first_input;
    cin >> second_input;
    cin >> third_input;

    // Check to see if cin has taken in anything other than an int

    // Check first input
    is_first_input_int = is_int(first_input);
    if (is_first_input_int != 1){
        // If the response was not one, output error message and quit program.
        cout << "ERROR - Your first input was not an integer. Please retry.";
        return 1;
    } //end if

    // Check second input
    is_second_input_int = is_int(second_input);
    if (is_second_input_int != 1){
        // If the response was not one, output error message and quit program.
        cout << "ERROR - Your second input was not an integer. Please retry.";
        return 1;
    } //end if

    // Check third input
    is_third_input_int = is_int(third_input);
    if (is_third_input_int != 1){
        // If the response was not one, output error message and quit program.
        cout << "ERROR - Your third input was not an integer. Please retry.";
        return 1;
    } //endif


    // Output user inputs back to console
    cout << "\nYour first integer was: " << first_input;
    cout << "\nYour second integer was: " << second_input;
    cout << "\nYour third integer was: " << third_input;

    // Perform logic to check what kind of triangle it must be from the entered dimensions.

    // If all three ints are equal, it is equilateral.
    if (first_input == second_input && second_input == third_input){
        cout << "\nEQUILATERAL";
    // If only two are equal, its isosceles.
    } else if (first_input == second_input || second_input == third_input || second_input == third_input){
        cout <<"\nISOSCELES";
    // If neither of those conditions are true, then none must match, so it is scalene.
    } else{
        cout <<"\nSCALENE";
    }
    // Return 0 for a successful program.
    return 0;

}