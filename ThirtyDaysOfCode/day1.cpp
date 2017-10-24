#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int snd_i{};
    double snd_d{};
    string snd_s{};

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    cin >> snd_i;
    cin >> snd_d;
    getline(cin >> ws, snd_s);

    // Print the sum of both integer variables on a new line.
    cout << i + snd_i << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + snd_d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + snd_s << endl;

    return 0;
}

