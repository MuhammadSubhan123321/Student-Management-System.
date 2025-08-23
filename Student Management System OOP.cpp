#include<iostream>
#include<fstream>
#include<string>
#include<set>
using namespace std;

class Enrollment {
public:
    string name, address, day_of_enrollment, date_of_birth;
    int student_id, contact;

public:
    void setdata(const string& FileName);
    void loadData(const string& FileName);
};

class Courses {
public:
    string filename, d ;

public:
    Courses(const string& file) : filename(file) {}

    bool fileExists() {
        ifstream file(filename );
        return file.good();
    }
    void setdata();
};

void Enrollment::setdata(const string& FileName) {
    ofstream file(FileName, ios::app);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    Enrollment student;

    cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter student address: ";
    getline(cin, student.address);

    cout << "Enter day of enrollment: ";
    getline(cin, student.day_of_enrollment);

    cout << "Enter date of birth: ";
    getline(cin, student.date_of_birth);

    cout << "Enter student id: ";
    cin >> student.student_id;

    cout << "Enter student contact: ";
    cin >> student.contact;

    file << student.name << "," << student.address << "," << student.day_of_enrollment << "," << student.student_id << "," << student.date_of_birth << "," << student.contact << "." << endl;
    cout << "Student added successfully!" << endl;
}

void Enrollment::loadData(const string& FileName) {
    char arr[200];
    ifstream in;
    in.open(FileName);
    if (!in) {
        cout << "Files were not found" << endl;
    } else {
        while (in.eof() == 0) {
            in.getline(arr, 200, ',');
            cout << "name:- " << arr << endl;
            in.getline(arr, 200, ',');
            cout << "address:- " << arr << endl;
            in.getline(arr, 200, ',');
            cout << "day of enrollment:- " << arr << endl;
            in.getline(arr, 200, ',');
            cout << "student id:- " << arr << endl;
            in.getline(arr, 200, ',');
            cout << "date of birth:- " << arr << endl;
            in.getline(arr, 200, '/');
            cout << "contact:- " << arr << endl;

            in.close();  // Close the file
        }
    }
}

void Courses::setdata() {
    if (fileExists()) {
         ofstream out;
     out.open(filename, ios::app);
    if (!out) {
        cout << "Error opening file." << endl;
        return;
    }
int c,selectedcourses[5];
set<int> selectedSubjects;
    cout << "Which one would you like to choose for your further degree!" << endl;
                cout << "1-Computer Science" << endl;
                cout << "2-BBA" << endl;
                cout << "3-MBBS" << endl;
                cout << "4-Psychology" << endl;
                cout << "Note: Please select from 1, 2, 3, 4 only!" << endl;
                cin >> c;
                while (true) {
                    if (c == 1 ) {
                       cout<<"Degree:- BS Computer Science"<<endl;
                       out<<"Degree:- BS Computer Science"<<endl;
                       cout<<"________________________________________________________"<<endl;
                       cout << "Select any five courses for your first semester" << endl;
                       cout << "Enter the numbers corresponding to the desired courses" << endl;
                       cout<<"________________________________________________________"<<endl;
                       cout<<"1-Programming fundamentals"<<endl;
                       cout<<"2-Calculus 1"<<endl;
                       cout<<"3-English 1"<<endl;
                       cout<<"4-ICT"<<endl;
                       cout<<"5-Physics"<<endl;
                       cout<<"6-Object Oriented Programming"<<endl;
                       cout<<"7-Calculus 2"<<endl;
                       cout<<"8-English 2"<<endl;
                       cout<<"9-Islamiat"<<endl;
                       cout<<"10-Discrete Structures"<<endl;
                       for(int i=0 ; i<5 ; i++){
                           int d;
                           cin>>d;
                            if (selectedSubjects.count(d) > 0) {
                    cout << "You have already selected this subject. Please select a different one." << endl;
                    i--;
                } else {
                    selectedcourses[i] = d;
                    selectedSubjects.insert(d);
                }
                       }
                    cout << "Selected courses for the first semester:" << endl;
    for (int i = 0; i < 5; i++) {
        switch (selectedcourses[i]) {
            case 1:
                out << "1-Programming fundamentals" << endl;
                break;
            case 2:
                out << "2-Calculus 1" << endl;
                break;
            case 3:
                out << "3-English 1" << endl;
                break;
            case 4:
                out << "4-ICT" << endl;
                break;
            case 5:
                out << "5-Physics" << endl;
                break;
            case 6:
                out << "6-Object Oriented Programming" << endl;
                break;
            case 7:
                out << "7-Calculus 2" << endl;
                break;
            case 8:
                out << "8-English 2" << endl;
                break;
            case 9:
                out << "9-Islamiat" << endl;
                break;
            case 10:
                out << "10-Discrete Structures" << endl;
                break;
            default:
                cout << "Invalid course number" << endl;
                break;
        }
    }
                       break;
                    }
                   else if (c == 2 ) {
                       
                          cout<<"Degree:- Business Administration"<<endl;
                       out<<"Degree:- Business Administration"<<endl;
                       cout<<"________________________________________________________"<<endl;
                       cout << "Select any five courses for your first semester" << endl;
                       cout << "Enter the numbers corresponding to the desired courses" << endl;
                       cout<<"________________________________________________________"<<endl;
                       cout<<"1-Introduction to Business"<<endl;
                       cout<<"2-Islamic Studies"<<endl;
                       cout<<"3-Business Mathematics & Statistics"<<endl;
                       cout<<"4-English Comprehension"<<endl;
                       cout<<"5-Economics"<<endl;
                       cout<<"6-Pakistan Studies"<<endl;
                       cout<<"7-Principles of Marketing"<<endl;
                       cout<<"8-Business Ethics"<<endl;
                       cout<<"9-Introduction to Public Administration"<<endl;
                       cout<<"10-Communication skills"<<endl;
                       for(int i=0 ; i<5 ; i++){
                           int d;
                           cin>>d;
                         if (selectedSubjects.count(d) > 0) {
                    cout << "You have already selected this subject. Please select a different one." << endl;
                    i--;
                } else {
                    selectedcourses[i] = d;
                    selectedSubjects.insert(d);
                }
                       }
                    cout << "Selected courses for the first semester:" << endl;
    for (int i = 0; i < 5; i++) {
        switch (selectedcourses[i]) {
            case 1:
                out << "1-Introduction to Business" << endl;
                break;
            case 2:
                out << "2-Islamic Studies" << endl;
                break;
            case 3:
                out << "3-Business Mathematics & Statistics" << endl;
                break;
            case 4:
                out << "4-English Comprehension" << endl;
                break;
            case 5:
                out << "5-Economics" << endl;
                break;
            case 6:
                out << "6-Pakistan Studies" << endl;
                break;
            case 7:
                out << "7-Principles of Marketing" << endl;
                break;
            case 8:
                out << "8-Business Ethics" << endl;
                break;
            case 9:
                out << "9-Introduction to Public Administration" << endl;
                break;
            case 10:
                out << "10-Communication skills" << endl;
                break;
            default:
                cout << "Invalid course number" << endl;
                break;
        }
    }
                       break;
                    }
                   else if (c == 3 ) {
                            cout<<"Degree:- MBBS"<<endl;
                       out<<"Degree:- MBBS"<<endl;
                       cout<<"________________________________________________________"<<endl;
                       cout << "Select any five courses for your first semester" << endl;
                       cout << "Enter the numbers corresponding to the desired courses" << endl;
                       cout<<"________________________________________________________"<<endl;
                       cout<<"1-Anatomy"<<endl;
                       cout<<"2-Biochemistry"<<endl;
                       cout<<"3-Psychiatry"<<endl;
                       cout<<"4-Dermatology"<<endl;
                       cout<<"5-Anesthesiologist"<<endl;
                       cout<<"6-Radiology"<<endl;
                       cout<<"7-Microbiology"<<endl;
                       cout<<"8-Pathology"<<endl;
                       cout<<"9-Forensic Medicine"<<endl;
                       cout<<"10-Obstetrics and Gynecology"<<endl;
                       for(int i=0 ; i<5 ; i++){
                           int d;
                           cin>>d;
                            if (selectedSubjects.count(d) > 0) {
                    cout << "You have already selected this subject. Please select a different one." << endl;
                    i--;
                } else {
                    selectedcourses[i] = d;
                    selectedSubjects.insert(d);
                }
                       }
                    cout << "Selected courses for the first semester:" << endl;
    for (int i = 0; i < 5; i++) {
        switch (selectedcourses[i]) {
            case 1:
                out << "1-Anatomy" << endl;
                break;
            case 2:
                out << "2-Biochemistry" << endl;
                break;
            case 3:
                out << "3-Psychiatry" << endl;
                break;
            case 4:
                out << "4-Dermatology" << endl;
                break;
            case 5:
                out << "5-Anesthesiologist" << endl;
                break;
            case 6:
                out << "6-Radiology" << endl;
                break;
            case 7:
                out << "7-Microbiology" << endl;
                break;
            case 8:
                out << "8-Pathology" << endl;
                break;
            case 9:
                out << "9-Forensic Medicine" << endl;
                break;
            case 10:
                out << "10-Obstetrics and Gynecology" << endl;
                break;
            default:
                cout << "Invalid course number" << endl;
                break;
        }
    }
                       break;
                    }
                  else  if (c == 4 ) {
                       cout<<"Degree:- MBBS"<<endl;
                       out<<"Degree:- MBBS"<<endl;
                       cout<<"________________________________________________________"<<endl;
                       cout << "Select any five courses for your first semester" << endl;
                       cout << "Enter the numbers corresponding to the desired courses" << endl;
                       cout<<"________________________________________________________"<<endl;
                       cout<<"1-Introduction to Psychology"<<endl;
                       cout<<"2-Adulthood Psychopathology"<<endl;
                       cout<<"3-Research Designs and Related Statistical Analysis"<<endl;
                       cout<<"4-Therapeutic Approaches with Adults"<<endl;
                       cout<<"5-Neuropsychology"<<endl;
                       cout<<"6-Child Psychodiagnostic Assessments"<<endl;
                       cout<<"7-Therapeutic Techniques in NLP Hypnosis"<<endl;
                       cout<<"8-Health Psychology"<<endl;
                       cout<<"9-School Psychology"<<endl;
                       cout<<"10-Data Collection Methods"<<endl;
                       for(int i=0 ; i<5 ; i++){
                           int d;
                           cin>>d;
                            if (selectedSubjects.count(d) > 0) {
                    cout << "You have already selected this subject. Please select a different one." << endl;
                    i--;
                } else {
                    selectedcourses[i] = d;
                    selectedSubjects.insert(d);
                }
                       }
                    cout << "Selected courses for the first semester:" << endl;
    for (int i = 0; i < 5; i++) {
        switch (selectedcourses[i]) {
            case 1:
                out << "1-Introduction to Psychology" << endl;
                break;
            case 2:
                out << "2-Adulthood Psychopathology" << endl;
                break;
            case 3:
                out << "3-Research Designs and Related Statistical Analysis" << endl;
                break;
            case 4:
                out << "4-Therapeutic Approaches with Adults" << endl;
                break;
            case 5:
                out << "5-Neuropsychology" << endl;
                break;
            case 6:
                out << "6-Child Psychodiagnostic Assessments" << endl;
                break;
            case 7:
                out << "7-Therapeutic Techniques in NLP Hypnosis" << endl;
                break;
            case 8:
                out << "8-Health Psychology" << endl;
                break;
            case 9:
                out << "9-School Psychology" << endl;
                break;
            case 10:
                out << "10-Data Collection Methods" << endl;
                break;
            default:
                cout << "Invalid course number" << endl;
                break;
        }
    }
                       break;
                    }
                    else if (c != 1 || c != 2 || c != 3 || c != 4) {
                        cout << "Invalid choice. Please select from 1, 2, 3, or 4." << endl;
                        cin >> c;
                    }
                }
     
    } else {
        cout << "Student doesn't Exist!" << endl;
    }
};

int main() {
    cout << "<<----------» ? •  Student Management System Site  • ? «--------- >>"<<endl;
    int choice;
    Enrollment a;
    string FileName;

    do {
        cout << "1- Add Student" << endl;
        cout << "2- Display Students All Data" << endl;
        cout << "3- Add Courses" << endl;
        cout << "4- Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Ignore the remaining newline character

        switch (choice) {
            case 1:
               {
                cout << "Enter student id in which you want to save its data" << endl;
                getline(cin, FileName);
                cout << "This is going to be your student id and its permanent file name" << endl;
                a.setdata(FileName);
               }
                break;
            case 2:
               {  
                cout << "Enter student id which you want to open" << endl;
                getline(cin, FileName);
                a.loadData(FileName);
               }
                break;
            case 3:
               {
                cout << "Enter student id in which you want to transfer its courses data" << endl;
                getline(cin, FileName);
                Courses courses(FileName);
                courses.setdata();
               }
                break;
            case 4:
               {
                   cout << "Quitting program." << endl;
               }
                break;
            default:
               {
                   cout << "Invalid choice. Try again." << endl;
               }
                break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}

           

