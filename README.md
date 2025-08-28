📚 Student Management Systems (C++)

**This repository contains two different implementations of a Student Management System in C++.
Each system is designed with a unique programming approach to demonstrate DSA (Data Structures & Algorithms) and OOP (Object-Oriented Programming) concepts.**

🔹 1. Student Management System (DSA - Linked List)

📌 **Features**:

-Uses a singly linked list to store student records.

**Supports the following operations:**

-Insert: Add a new student with ID, Name, Age, and CGPA.

-Delete: Remove the last student from the list.

-Search by ID: Find a student and return their index in the list.

-Display: Show all students in the list.

-Menu-driven program with options for user interaction.

-Data is stored only in memory (not persistent after program exit).

📖 **Example Flow:**
1. Add a person to the list
2. Remove a person from the list
3. Search by ID
4. Show the list
5. Exit the program

🔹 2. Student Management System (OOP - File Handling)
📌 Features:

**Uses Object-Oriented Programming with classes:**

-Enrollment class → Handles student details (Name, Address, DOB, ID, Contact, Enrollment Day).

-Courses class → Allows selecting courses based on chosen Degree program.

-Data is stored in files (each student gets their own file using their ID as filename).

-Prevents duplicate course selections using C++ STL Set.

-Multiple degree options available:

-Computer Science

-BBA

-MBBS

-Psychology

**Students can select 5 unique courses for their first semester.**

📖 Example Flow:
1. Add Student
2. Display Students All Data
3. Add Courses
4. Quit

📂 **File Handling:**

-Each student gets a separate file named after their Student ID.

-Data (personal + courses) is appended to that file.

-Allows loading and displaying data from existing student files.

⚡ **Key Differences Between the Two Systems**
-Feature	DSA Version (Linked List)	OOP Version (File Handling)
-Storage Method	In-Memory (Linked List)	Persistent (File System)
-Deletion	Deletes last student only	Not implemented
-Searching	By Student ID (returns index)	By loading file (direct lookup)
-Course Management	❌ No course handling	✅ Supports multiple degrees + course selection
-Concept Demonstrated	Data Structures (Linked List)	OOP + File Handling + STL
🛠️ How to Run

**Compile the desired system:**

g++ dsa_student_system.cpp -o dsa_system
g++ oop_student_system.cpp -o oop_system


**Run the program:**

./dsa_system
./oop_system

👨‍💻 **Developer**

Muhammad Subhan – Full-Stack Developer (in progress)

This project was created for learning purposes to demonstrate different programming approaches in C++.
It shows how the same "Student Management System" can be built in two different styles:

DSA-focused (Linked List)

OOP-focused (File Handling + Classes)
