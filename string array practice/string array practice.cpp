/*
This program impliment two functions using pointers.
One return the pointer pointing to the shortest element of a array of string, the other reverse the array of string
*/


#include <iostream>
#include <string>
using namespace std;

//function returning the shortest element of array of string
string* shortest(string vals[], int numVals) {
    string* shortval = vals;  //initiallize the pointer to the first element of the array
    for (int i = 0; i < numVals; i++) {
        if (vals[i].size() < shortval->size()) shortval = vals + i;  //update the pointer if the element is shorter
    }
    return shortval;
}

//function reverse the array of string
string* reversed(string names[], int numNames) {
    string* temp = new string[numNames];  //create a new string array
    int j = 0;
    for (int i = numNames - 1; i >= 0; i--) {
        *(temp + j) = names[i];  //fill the element backward
        j++;
    }
    return temp;
}

int main()
{

    //case1
    string vals1[] = { "Annabelle", "Carlos", "Li" };
    cout << "Testing functions to find shortest string and copy in reverse order" << endl << "Original: ";
    for (int i = 0; i < 3; i++) {
        cout << vals1[i] << " ";
    }
    cout << endl;
    string* shortval = shortest(vals1, 3);  //function call
    string* reverse = reversed(vals1, 3);  //function call
    cout << "Shortest: " << *shortval << endl;
    cout << "Reversed: ";
    for (int i = 0; i < 3; i++) {
        cout << *(reverse + i) << " ";
    }
    cout << endl;

    //case 2
    string vals2[] = { "Amit", "Nella", "Stephen", "Sophia" };
    cout << "Original: ";
    for (int i = 0; i < 4; i++) {
        cout << vals2[i] << " ";
    }
    cout << endl;
    shortval = shortest(vals2, 4);  //function call
    reverse = reversed(vals2, 4);  //function call
    cout << "Shortest: " << *shortval << endl;
    cout << "Reversed: ";
    for (int i = 0; i < 4; i++) {
        cout << *(reverse + i) << " ";
    }

}