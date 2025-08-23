#include <iostream>
using namespace std;

class student {
    // Data Part
    int id;
    string name;
    int age;
    float cgpa;
    // Pointers
    student* next;
    student* head;
    student* tail;
public:
    student() : next(nullptr), head(nullptr), tail(nullptr) {}
    
    void Insert(int id, string name, int age, float cgpa) {
        student* temp = new student;
        temp->id = id;
        temp->name = name;
        temp->age = age;
        temp->cgpa = cgpa;
        temp->next = nullptr;

        if (head == nullptr) {  
            head = temp;
            tail = temp;
        } else {  
            tail->next = temp;
            tail = temp;
        }
    }

    void Delete() {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }
        if (head == tail) {  
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            student* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }
    
    int searchById(int searchId) const {
        student* temp = head;
        int index = 0;
        
        while (temp != nullptr) {
            if (temp->id == searchId) {
                return index;
            }
            temp = temp->next;
            index++;
        }
        
        return -1; // ID not found
    }

    void Display() const {
        if (!head) {
            cout << "The list is empty.\n";
            return;
        }
        student* temp = head;
        while (temp) {
            cout << temp->id << "," << temp->name << "," << temp->age << "," << temp->cgpa << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void CS() {
 system("clear");
}

int main() {
    student list;
    int option = 0;
    string name;
    int id;
    int age;
    float cgpa;
cout<<"'STUDENT MANAGEMENT SYSTEM'"<<endl;
cout<<"---------------------------"<<endl;
    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Add a person to the list\n";
        cout << "2. Remove a person from the list\n";
        cout << "3. Search by ID\n";
        cout << "4. Show the list\n";
        cout << "5. Exit the program\n";
        cout << "Select an option: ";
        cin >> option;
        CS(); 

        if (option == 1) {
            cout << "Enter the Student ID: ";
            cin >> id;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the age: ";
            cin >> age;
            cout << "Enter the CGPA: ";
            cin >> cgpa;
            system("clear");
            list.Insert(id, name, age, cgpa);
        } 
        else if (option == 2) {
            list.Delete();
        } 
        else if (option == 3) {
            cout << "Enter the Student ID to search: ";
            cin >> id;
            system("clear");
            int index = list.searchById(id);
            if (index != -1) {
                cout << "Student found at index: " << index << endl;
            } else {
                cout << "Student with ID " << id << " not found.\n";
            }
        }
        else if (option == 4) {
            list.Display();
        }  
        else if (option == 5) {
            cout << "Closing the program...\n";
            break;
        } 
        else {
            cout << "Please select a valid option.\n";
        }
    }

    return 0;
}