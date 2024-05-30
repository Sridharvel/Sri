
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name[3] = {"sowmi", "anandh", "kamatchi"};
    int days[3] = {5, 10, 4};

    ofstream store("patient.txt");
    if (store.is_open()) {
        for (int i = 0; i < 3; i++) {
            store << name[i] << " " << days[i] << endl;
        }
        store.close();
    } else {
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    string NAME;
    cout << "Enter the name: ";
    cin >> NAME;

    ifstream readpatient("patient.txt");
    if (readpatient.is_open())
	 {
        string patientName;
        int patientDays;
        bool found = false;

        while (readpatient >> patientName >> patientDays) {
            if (NAME == patientName) {
                cout << "Bill: " << patientDays * 12 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Patient not found" << endl;
        }

        readpatient.close();
    } else {
        cout << "Unable to open file for reading" << endl;
        return 1;
    }

    return 0;
}

