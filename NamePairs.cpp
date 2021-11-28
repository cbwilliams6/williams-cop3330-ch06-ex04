#include "std_lib_facilities.h"

int main() {
    vector<string> names;
    vector<int> scores;
    bool contLooping = true;
    int loopPosition = 0;

    string nameEntered;
    int scoreEntered;

    while (contLooping) {
        cout << "Enter a name (\"No more\" to stop inputting): ";
        if (loopPosition == 0) {
            getline(cin, nameEntered);
        }
        else {
            cin.ignore();
            getline(cin, nameEntered);
        }

        if (nameEntered == "No more") {
            contLooping = false;
        }
        else {
            for (int i = 0; i < names.size(); i++) {
                if (names[i] == nameEntered) {
                    cout << "Name already previously entered";
                    return 0;
                }
            }
            names.push_back(nameEntered);

            cout << "Enter a score for " << nameEntered << ": ";
            cin >> scoreEntered;
            scores.push_back(scoreEntered);
        }

        loopPosition++;
    }

    cout << "\nNames and scores:\n";
    for (int j = 0; j < names.size(); j++) {
        cout << names[j] << " " << scores[j] << endl;
    }
}