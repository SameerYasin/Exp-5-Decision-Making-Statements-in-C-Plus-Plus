//SAMEER YASIN EXP-5
//24070123142
//ENTC B1

#include<iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter the character: ";
    cin >> c;

    c = tolower(c); // Convert to lowercase for uniformity

    cout << "Checking whether the character is a vowel or consonant: " << c << endl;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "The character you have entered is a VOWEL" << endl;
    } else {
        cout << "The character you have entered is a CONSONANT" << endl;
    }

    return 0;
}

/*
::SAMPLE OUTPUTS::

Enter the character: A
Checking whether the character is a vowel or consonant: a
The character you have entered is a VOWEL

Enter the character: e
Checking whether the character is a vowel or consonant: e
The character you have entered is a VOWEL

Enter the character: p
Checking whether the character is a vowel or consonant: p
The character you have entered is a CONSONANT

Enter the character: L
Checking whether the character is a vowel or consonant: l
The character you have entered is a CONSONANT
*/
