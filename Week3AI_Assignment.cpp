#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Student {
public:
    string firstName;
    string lastName;
    string grade;
    string finalGrade;
    
};

int main()
{
   
    Student s1;

    ofstream studentGrades("Student.txt");
    
    if (studentGrades.is_open())
    {

        studentGrades << ("Dave Grohl 95" ) << endl;
        studentGrades << ("Nate Mendel 80") << endl;
        studentGrades << ("Pat Smear 70 ") << endl;
        studentGrades << ("Taylor Hawkins 75 ") << endl;
        studentGrades << ("Chris Shiftlett 90 ") << endl;
        studentGrades << ("Rami Jaffee 85 ") << endl;

        studentGrades.close();
    }
    else
        cout << "File coud not be opened" << endl;
    {
        vector<Student> myList;

        ifstream readingStudentGrades("Student.txt");

        string currentText;
        if (readingStudentGrades.is_open())
        {
            while (getline(readingStudentGrades, currentText))
            {
                int indexOfSpace = currentText.find(' ');

                s1.firstName = currentText.substr(0, indexOfSpace);
                
                string remainingText = currentText.substr(indexOfSpace + 1); 

                indexOfSpace = remainingText.find(' ');

                s1.lastName = remainingText.substr(0, indexOfSpace);
                
                string afterSecondText = remainingText.substr(indexOfSpace + 1);

                indexOfSpace = afterSecondText.find(' ');

                s1.grade = afterSecondText.substr(0, indexOfSpace);
                
                
                int num = stoi(s1.grade);
                
                if (num == 95)
                {
                    myList.push_back(s1);
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                } 
                else if (num == 90) 
                {
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                }
                else if (num == 85)
                {
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                }
                else if (num == 80)
                {
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                }
                else if (num == 75)
                {
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                }
                else if (num == 70)
                {
                    cout << s1.firstName << " " << s1.lastName << " " << s1.grade << endl;
                }

                //these if statements wont seperate code properly. Needs to have "Bubble Sort"


                //cout << "Average: " << (num + num + num + num + num + num) << endl;
                
            };
            //cout << "Average: " << (num + num + num + num + num + num) / 6 << endl; won't work here since its out of loop
            
        }
        else
            cout << "Could not open file" << endl;    
    } 
    return 0;
}
