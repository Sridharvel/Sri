
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


	ofstream question1("questions.txt");
	ofstream question2("answers.txt");

	if(question1.is_open())
	{
		question1<<"What is Dml ? "<<"a. data manipulation language"<<" b. data mining language"<<endl;

		question1<<"What is ai";
		question1.close();
	}
	else{
		cout<<"fialed to open";
	}

	if(question2.is_open())
	{
		question2<<"a";
		question2<<"a";
		question2.close();
	}
	else{
		cout<<"fialed to open";
	}

    ifstream questionsFile("questions.txt"); // Open the questions file
    ifstream answersFile("answers.txt"); // Open the answers file

    if (!questionsFile || !answersFile) { // Check if both files are opened successfully
        cout << "Error: Unable to open one or more files." << endl;
        return 1;
    }

    int total = 0; // Initialize total score to 0
    string question, answer; // Variables to store question and answer

    // Read questions and answers line by line
    for (int i = 0; i < 2; ++i) {
        getline(questionsFile, question);
        getline(answersFile, answer);

        char userAnswer;
        cout << question << endl; // Display the question

        cout << "Your answer: ";
        cin >> userAnswer; // Get user's answer

        // Check user's answer against the correct answer
        if (userAnswer == answer[0]) {
            total += 2; // If the answer is correct, add 2 to the total score
        } else {
            total += 0; // If the answer is wrong, add 0 to the total score
        }
    }

    questionsFile.close(); // Close the questions file
    answersFile.close(); // Close the answers file


    cout << "Total score: " << total << endl;

    return 0;
}
