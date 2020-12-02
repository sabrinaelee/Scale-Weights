
 /*This is a program that calculates how many of each type of a weight are required to weigh a given weight. 
    The following test value was used to test the program logic: 2048
    Output:
    16 x 125lb weights,
    0 x 75lb weights,
    1 x 42lb weights,
    0 x 15lb weights,
    6 x 1lb weights,
    Other test values that I used: 123, 39, 473, 87, 38
    Checking: I used a calculator to verify the output of the hardcoded values above.
    Range: -2147483647 -> 2147483647   */

#include <iostream>
using namespace std;

void calculate_weight() {

    //test value
    //int weight_given = 2048;
    
    //declare and initialize variables
    int weight_given;
    int weights125 = 0;
    int weights75 = 0;
    int weights42 = 0;
    int weights15 = 0;
    int weights1 = 0;

    //ask for user input
    cout << "Please enter a weight value \n";
    cin >> weight_given;
   
    //calculate the number of weights required for each type of weight
    while (weight_given > 0) {

    if (weight_given >= 125 && weight_given > 75) {
            weights125 = weight_given / 125;
            weight_given = weight_given % 125;   
        }

        else if (weight_given >= 75 ) {
           weights75 = weight_given / 75;
           weight_given = weight_given % 75;
        }

        else if (weight_given >= 42 ) {
            weights42 = weight_given / 42;
            weight_given = weight_given % 42;
        }

        else if (weight_given >= 15 ) {
            weights15 = weight_given / 15;
            weight_given = weight_given % 15;
        }

        else if (weight_given >= 1) {
            weights1 = weight_given / 1;
            weight_given = weight_given % 1;
        }

       }

    //display output for user
   cout << "The number of weights required are as follows:\n " << weights125 << " x 125lb weights,\n " << weights75 << " x 75lb weights,\n "
         << weights42 << " x 42lb weights,\n " << weights15 << " x 15lb weights,\n " << weights1 << " x 1lb weights,\n ";

}       

int main(){
    //calling the function within the main method
    calculate_weight();
}
