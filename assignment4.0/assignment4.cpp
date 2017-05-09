/*
 *Created by: Toshiki Yonezawa
 *Created on:05/08/2017
 *This program works as a grade calculataor.
 *Prof. April Browne gave two text files, which are answerkey for quiz and student's answers, for input.
 *The program input data to two single array from the two text files.
 *After input data, the program compare the two array for calculating quiz score.
 *Finally the program outputs name, question numbers of incorrect answer, and total score to other text file.
 *It can calculate a grade for each student at same time.
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class gradeCalculator {
    public: // the class' public functions
        void compareTwoArray(string answerkey[18], string studentAnswer[20], int mistake[18], int i, int j, int k, double score); // compare two single array to get name, corrrect/incorrect answers, and total score 
        double GetScore() const; // get function for keeping total score of quiz
        int GetMistake() const; // get function for keeping total numbers of incorrect question
    private: // the class' private internal data members
        double totalScore = 0.0; // double variable for initializing of total score.
        int NumOfMistake = 0; // int variable for initializing of mistake numbers
};

// class functions
void gradeCalculator::compareTwoArray(string answerkey[18], string studentAnswer[20], int mistake[18], int i, int j, int k, double score) {
    for (i = 0; i < 18; i++) {
        j = i + 2; // single array of student answer contains name and answers, so the counting must start after first name and las name for comparing. 
        if (answerkey[i] == studentAnswer[j]) { // if statement for correct answer
            score = score + 1.0; // if student got a correct answer, the program adds 1 point to variable of score.
        }
        else if (answerkey[i] != studentAnswer[j]) { // if statement for incorrect answer
            if (studentAnswer[j] == "\?") { // if student gives omitted answer, student gets 0 point to score.
                mistake[k] = i; // keep the question number of incorrect answer
                k++;
            }
            else { // if student gives incorrect answer, the student lose 1/4 point (0.25 point) from score. 
                score = score - 0.25;
                mistake[k] = i; // keep the question number of incorrect answer
                k++;
            }
        }
    }
    totalScore = score; // variable of totalScore is initialized by variabe of score.
    NumOfMistake = k; // variable for total question number of mistakes is initialized by variable k.
}

double gradeCalculator::GetScore() const { // get function for showing total score of quiz
    return totalScore;
}

int gradeCalculator::GetMistake() const { // get function for keeping total question numbers of mistake
    return NumOfMistake;
}

int main() {
    ifstream inFS1; // input first file stream
    ifstream inFS2; // input second file stream
    ofstream outFS; // output file stream
    string answerkey[18]; // single array for keeping answwerkey for quiz
    string studentAnswer[20]; // single array for keeping student's name and answers
    int mistake[18]; // single array for keeping numbers of incorrect question
    int i = 0; // int variable for loop
    int j = 0; // int variable for loop
    int k = 0; // int variable for loop
    int l = 0; // int variable for loop
    double score = 0.0; // double variable for score
    int student = 6; // total numbers of student
    
    gradeCalculator data; // user-created object of class type gradeCalculator
    
    cout << endl;
    cout << "Opening file answerkey.txt..." << endl;
    
    // open 2 text files for input data to two single array
    inFS1.open("answerkey.txt");
    if (!inFS1.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file answerkey.txt..." << endl;
        return 1;
    }
    
    cout << endl;
    cout << "Opening file studentAnswer.txt..." << endl;
    
    inFS2.open("studentAnswer.txt");
    if (!inFS2.is_open()) { // if the program cannot open this file, the program will stop to work.
        cout << endl;
        cout << "Could not open file studentAnswer.txt..." << endl;
        return 1;
    }
    
    cout << endl;
    cout << "Opening file studentResult.txt..." << endl;
    
    //open file for output
    outFS.open("studentResult.txt");
    if (!outFS.is_open()) {
      cout << endl;
      cout << "Could not open file studentResult.txt..." << endl;
      return 1;
    }
    
    cout << endl;
    cout << "Reading data..." << endl;
    
    for (l = 0; l < student; l++) { // the number of loop depends on total numbers of student data. 
        
        // for loop for input answerkey's data to single array
        for (i = 0; i < 18; i++) {
            inFS1 >> answerkey[i];
        }
    
        // fr loop for input student's name and answers to single array
        for (i = 0; i < 20; i++) {
            inFS2 >> studentAnswer[i];
        }
    
        // class function for comparing two single array
        data.compareTwoArray(answerkey, studentAnswer, mistake, i, j, k, score);
    
        outFS << endl;
        outFS << "Student Name: " << studentAnswer[0] << " " << studentAnswer[1] << endl; // studentAnswer.txt contains student's name, so the sentence output the name to text file.
        outFS << endl;
    
        outFS << "This student got an incorrect on Question "; 
        // for loop for showing question number of incerrect answer
        for (i = 0; i < data.GetMistake(); i++) {
            outFS << "#" << mistake[i] + 1 << ". "; // element of single array starts form 0, so I add 1 for output.
        }
        outFS << endl;
    
        // I decide if student got negative total score, the else if statement give student's score is 0 because negative total score doesn't make sense for me.
        if (data.GetScore() > 0) { // if statement for positive total score
            outFS << endl;
            outFS << "Total Score: " << data.GetScore() << endl; // output total score to text file
            outFS << endl;
        }
        else if (data.GetScore() <= 0) { // else if statement for negative total score
            outFS << endl;
            outFS << "Total Score: 0" << endl; // output 0 socre to text file
            outFS << endl;
        }
    }
    
    // close each file
    cout << endl;
    cout << "Closing file answerkey.txt..." << endl;
    inFS1.close();
    cout << endl;
    cout << "Closing file studentAnswer.txt..." << endl;
    inFS2.close();
    cout << endl;
    cout << "Closing file studentResult.txt..." << endl;
    outFS.close();
    
    return 0;
}

/*
 *Student Name: Christian Smith
 *
 *This student got an incorrect on Question #1. #2. #3. #4. #6. #7. #8. #10. #11. #12. #13. #14. #17. #18. 
 *
 *Total Score: 2.25
 *
 *
 *Student Name: Paxton Jones
 *
 *This student got an incorrect on Question #1. #2. #3. #5. #6. #7. #9. #10. #11. #13. #14. #15. #17. 
 *
 *Total Score: 2.75
 *
 *
 *Student Name: Abby Sciuto
 *
 *This student got an incorrect on Question #1. #2. #3. #4. #5. #7. #8. #9. #10. #12. #13. #16. 
 *
 *Total Score: 4
 *
 *
 *Student Name: Audrey Smithson
 *
 *This student got an incorrect on Question #1. #3. #4. #5. #6. #7. #8. #9. #10. #12. #13. #14. #15. #16. #17. #18. 
 *
 *Total Score: 0
 *
 *
 *Student Name: Katie Holmes
 * 
 *This student got an incorrect on Question #1. #2. #3. #4. #5. #6. #7. #8. #9. #10. #14. #15. #17. #18. 
 *
 *Total Score: 2
 *
 *
 *Student Name: Carrie Grant
 *
 *This student got an incorrect on Question #1. #2. #3. #6. #7. #8. #11. #12. #16. #17. #18. 
 *
 *Total Score: 5
 */
