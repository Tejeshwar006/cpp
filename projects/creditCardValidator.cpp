#include <iostream>
using namespace std;

int main(){

    //credit card number validation
    //Luhn algorithm is used to validate credit card numbers
    //steps:
    //1. Starting from the rightmost digit, double every second digit
    //2. If the result is greater than 9, subtract 9 from the result
    //3. Add all the digits together
    //4. If the sum is divisible by 10, the credit card number is valid

    string creditCardNumber = "378282246310005";
    int size = creditCardNumber.length(); // Get the length of the credit card number
    int arr[size]; // Create an array to store the digits of the credit card number

    // Convert the credit card number from string to integer array
    for (int i = 0; i < size; i++){
        arr[i] = creditCardNumber[i] - '0'; // Convert character to integer
        cout << arr[i]; // Print the digit
    }
    cout << endl;

    // Apply Luhn algorithm: double every second digit from the right
    for (int j = size - 2; j >= 0; j -= 2){
        int temp = arr[j] * 2; // Double the digit
        if (temp > 9){
            temp -= 9; // If the result is greater than 9, subtract 9
        }
        arr[j] = temp; // Update the array with the new value
    }
    
    // Print the modified array
    for(int i: arr){
        cout << i;
    }
    cout << endl;

    int sum = 0; // Initialize sum to 0

    // Calculate the sum of all digits
    for (int k = 0; k < size; k++) {
        sum += arr[k];
    }
    cout << sum; // Print the sum

    // Check if the sum is divisible by 10
    if (sum % 10 == 0){
        cout << "\nValid credit card number"; // If divisible by 10, it's a valid credit card number
    } else {
        cout << "\nInvalid credit card number"; // If not, it's an invalid credit card number
    }

    return 0;
}