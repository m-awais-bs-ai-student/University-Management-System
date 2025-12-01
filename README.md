# Student Management System (Using Dynamic Memory) 🎓

A console-based **Student Management System** written in **C++**. This project focuses on **Object-Oriented Programming (OOP)** and **Dynamic Memory Allocation**. Unlike standard vector-based systems, this application manually manages memory on the heap using pointers (`new` and `delete`), offering a deep dive into low-level memory handling in C++.

## 🚀 Features

### 📝 Record Management (CRUD)
* **Create:** Input details for Students, Teachers, Courses, and Grades.
* **Read:** Display organized bio-data and academic details.
* **Update:** Modify existing records for any specific entity.
* **Delete:** Remove specific records and free up memory to prevent leaks.

### 🏗️ Architecture
The system is built around four core classes:
1.  **Student:** Stores Name, ID, Main Course, and Enrollment Date.
2.  **Teacher:** Stores Name, ID, Department, Position, and Salary.
3.  **Course:** Stores Course Name, Code, Instructor, and Credits.
4.  **Grade:** Associates a Student ID and Course Code with a specific Grade.

### 🧠 Technical Highlights
* **Raw Pointers:** All data members are declared as pointers (e.g., `string* studentName`).
* **Dynamic Allocation:** Uses the `new` keyword to allocate memory during runtime.
* **Memory Cleanup:** Implements Destructors (`~Class`) and explicit `delete` commands to ensure efficient memory usage.
* **Array of Pointers:** Manages multiple records using dynamically allocated arrays of object pointers.

## 💻 How to Run

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/student-management-system.git](https://github.com/your-username/student-management-system.git)
    ```
2.  **Navigate to the directory:**
    ```bash
    cd student-management-system
    ```
3.  **Compile the source code:**
    ```bash
    g++ main.cpp -o sms_system
    ```
4.  **Run the application:**
    * On Windows: `sms_system.exe`
    * On Linux/Mac: `./sms_system`

## 📖 Usage Guide

1.  **Initialization:** Upon running, specify the total number of students you wish to manage.
2.  **Data Entry:**
    * Fill in details for all Students.
    * Fill in details for their corresponding Courses.
    * Assign Grades.
    * Enter Teacher details.
3.  **View Data:** The system will display all entered information in a formatted list.
4.  **Modification:** You will be prompted to **Delete** or **Update** specific records by entering their index number.

## ⚠️ Memory Management Note
This project is an educational demonstration of manual memory management. It explicitly handles memory deallocation to demonstrate how destructors and the `delete` operator work in C++ to prevent memory leaks.

## 📜 License
This project is open-source and available for educational purposes.
