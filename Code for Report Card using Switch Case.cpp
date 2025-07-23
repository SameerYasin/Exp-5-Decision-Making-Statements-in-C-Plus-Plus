// SAMEER YASIN
// 24070123145
// ENTC B1

#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << ":: REPORT CARD ::" << endl;
    cout << "WHICH SUBJECT MARKS DO YOU WANT TO SEE?" << endl;
    cout << "1. PHYSICS" << endl;
    cout << "2. CHEMISTRY" << endl;
    cout << "3. MATHS" << endl;
    cout << "4. HINDI" << endl;
    cout << "5. ENGLISH" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "The marks of PHYSICS are: 92" << endl;
            break;
        case 2:
            cout << "The marks of CHEMISTRY are: 88" << endl;
            break;
        case 3:
            cout << "The marks of MATHS are: 99" << endl;
            break;
        case 4:
            cout << "The marks of HINDI are: 85" << endl;
            break;
        case 5:
            cout << "The marks of ENGLISH are: 91" << endl;
            break;
        default:
            cout << "INVALID CHOICE" << endl;
    }

    return 0;
}

/*

SAMPLE OUTPUTS:

1. Input: 1
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 1
The marks of PHYSICS are: 92

2. Input: 2
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 2
The marks of CHEMISTRY are: 88

3. Input: 3
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 3
The marks of MATHS are: 99

4. Input: 4
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 4
The marks of HINDI are: 85

5. Input: 5
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 5
The marks of ENGLISH are: 91

6. Input: 6
 REPORT CARD 
WHICH SUBJECT MARKS DO YOU WANT TO SEE?
1. PHYSICS
2. CHEMISTRY
3. MATHS
4. HINDI
5. ENGLISH
Enter your choice (1-5): 6
INVALID CHOICE

*/
