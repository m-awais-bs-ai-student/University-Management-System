#include<iostream>
using namespace std;

class student
{
	string* studentName;
	int* studentId;
	string* mainCourse;
	string* enrollmentDate;

public:
	student() {
		studentName = new string;
		studentId = new int;
		mainCourse = new string;
		enrollmentDate = new string;
	}
	~student() {
		delete studentName;
		delete studentId;
		delete mainCourse;
		delete enrollmentDate;
	}
	void setData()
	{
		cout << "*****Please Enter Student Details*****" << endl;
		cout << "Enter student name: ";
		cin >> *studentName;
		cout << "Enter student ID: ";
		cin >> *studentId;
		cout << "Enter student course: ";
		cin >> *mainCourse;
		cout << "Enter student Enrollment Date: ";
		cin >> *enrollmentDate;
	}
	void getData()
	{
		cout << "*****Student Bio Data*****" << endl;
		cout << "Name: " << *studentName << endl;
		cout << "ID: " << *studentId << endl;
		cout << "Course: " << *mainCourse << endl;
		cout << "Enrollment: " << *enrollmentDate << endl;
	}
};

class teacher
{
private:
	double* salary;
	string* tName;
	int* tId;
	string* department;
	string* position;

public:
	teacher() {
		salary = new double;
		tName = new string;
		tId = new int;
		department = new string;
		position = new string;
	}
	~teacher() {
		delete salary;
		delete tName;
		delete tId;
		delete department;
		delete position;
	}
	void setData()
	{
		cout << "*****Please Enter Teacher Details*****" << endl;
		cout << "Enter teacher name: ";
		cin >> *tName;
		cout << "Enter teacher ID: ";
		cin >> *tId;
		cout << "Enter teacher department: ";
		cin >> *department;
		cout << "Enter teacher position: ";
		cin >> *position;
	}
	void getData()
	{
		cout << "*****Teacher Bio Data*****" << endl;
		cout << "Name: " << *tName << endl;
		cout << "ID: " << *tId << endl;
		cout << "Department: " << *department << endl;
		cout << "Position: " << *position << endl;
	}
};

class course
{
	string* courseName;
	string* courseCode;
	string* instructor;
	int* credits;

public:
	course() {
		courseName = new string;
		courseCode = new string;
		instructor = new string;
		credits = new int;
	}
	~course() {
		delete courseName;
		delete courseCode;
		delete instructor;
		delete credits;
	}
	void setData()
	{
		cout << "*****Please Enter Course Details*****" << endl;
		cout << "Enter Course name: ";
		cin >> *courseName;
		cout << "Enter Course courseCode: ";
		cin >> *courseCode;
		cout << "Enter Course instructor: ";
		cin >> *instructor;
		cout << "Enter Course credits: ";
		cin >> *credits;
	}
	void getData()
	{
		cout << "*****Course Details*****" << endl;
		cout << "Course Name: " << *courseName << endl;
		cout << "Course Code: " << *courseCode << endl;
		cout << "Course Instructor: " << *instructor << endl;
		cout << "Course credits: " << *credits << endl;
	}
};

class Grade
{
	int* studentId;
	string* courseCode;
	char* studentGrade;

public:
	Grade() {
		studentId = new int;
		courseCode = new string;
		studentGrade = new char;
	}
	~Grade() {
		delete studentId;
		delete courseCode;
		delete studentGrade;
	}
	void setData(student &s, course &c)
	{
		cout << "*****Please Enter Grade Details*****" << endl;
		cout << "Enter student id: ";
		cin >> *studentId;
		cout << "Enter Course Code: ";
		cin >> *courseCode;
		cout << "Enter Grades: ";
		cin >> *studentGrade;
	}
	void getData()
	{
		cout << "*****Grade Details*****" << endl;
		cout << "Student ID: " << *studentId << endl;
		cout << "Course Code: " << *courseCode << endl;
		cout << "Grade: " << *studentGrade << endl;
	}
};

int main()
{
	int totalST;
	cout << "How many students data you want to save: ";
	cin >> totalST;

	student** s = new student * [totalST];
	course** c = new course * [totalST];
	Grade** g = new Grade * [totalST];
	teacher* t1 = new teacher;

	for (int i = 0; i < totalST; i++)
	{
		s[i] = new student;
		s[i]->setData();
	}

	for (int i = 0; i < totalST; i++)
	{
		c[i] = new course;
		c[i]->setData();
	}

	for (int i = 0; i < totalST; i++)
	{
		g[i] = new Grade;
		g[i]->setData(*s[i], *c[i]);
	}

	t1->setData();

	cout << "********** Getting Information **********" << endl << endl;

	for (int i = 0; i < totalST; i++)
	{
		s[i]->getData();
		cout << endl;
	}

	for (int i = 0; i < totalST; i++)
	{
		c[i]->getData();
		cout << endl;
	}

	for (int i = 0; i < totalST; i++)
	{
		g[i]->getData();
		cout << endl;
	}
	t1->getData();
	
	//Data Deletion Portion Of Code

    char delAns;
	int delIndex;
	cout << "Do you want to delete any student data? (y/n): ";
	cin >> delAns;
	{
		if (delAns == 'y' || delAns == 'Y')
		{
			cout << "Enter the student number you want to delete (0 to " << totalST - 1 << "): ";
	        cin >> delIndex;
	        if (delIndex >= 0 && delIndex < totalST)
	        {
		        delete s[delIndex];
		        s[delIndex] = nullptr;
		        cout << "Student data deleted." << endl;
	        }
		}
	}
	
    cout << "Do you want to delete any course data? (y/n): ";
	cin >> delAns;
	{
		if (delAns == 'y' || delAns == 'Y')
		{
			cout << "Enter the course number you want to delete (0 to " << totalST - 1 << "): ";
	        cin >> delIndex;
	        if (delIndex >= 0 && delIndex < totalST)
	        {
		        delete c[delIndex];
		        c[delIndex] = nullptr;
		        cout << "Course data deleted." << endl;
	        }
	    }
    }
    
    cout << "Do you want to delete any course data? (y/n): ";
	cin >> delAns;
	{
		if (delAns == 'y' || delAns == 'Y')
		{
			cout << "Enter the grade number you want to delete (0 to " << totalST - 1 << "): ";
	        cin >> delIndex;
	        if (delIndex >= 0 && delIndex < totalST)
	        {
		        delete g[delIndex];
		        g[delIndex] = nullptr;
		        cout << "Grade data deleted." << endl;
	        }
	    }
    }

	char delTec;
	cout << "Do you want to delete the teacher data? (y/n): ";
	cin >> delTec;
	if (delTec == 'y' || delTec == 'Y')
	{
		delete t1;
		t1 = nullptr;
		cout << "Employee data deleted." << endl;
	}

    //Data Upgrading Portion
    
    char ans;
    int updIndex;

    // Updating Student Record
    cout << "Do you want to update any student record? (y or n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') 
	{
        cout << "Enter the student number to update (0 to " << totalST - 1 << "): ";
        cin >> updIndex;
        if (updIndex >= 0 && updIndex < totalST && s[updIndex] != nullptr) 
		{
            s[updIndex]->setData();
        }
    }

    // Updating Course Record
    cout << "Do you want to update any course record? (y or n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') 
	{
        cout << "Enter the course number to update (0 to " << totalST - 1 << "): ";
        cin >> updIndex;
        if (updIndex >= 0 && updIndex < totalST && c[updIndex] != nullptr) 
		{
            c[updIndex]->setData();
        }
    }

    // Updating Grade Record
    cout << "Do you want to update any grade record? (y or n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') 
	{
        cout << "Enter the grade number to update (0 to " << totalST - 1 << "): ";
        cin >> updIndex;
        if (updIndex >= 0 && updIndex < totalST && g[updIndex] != nullptr) 
		{
            g[updIndex]->setData(*s[updIndex], *c[updIndex]);
        }
    }

    // Displaying Updated Data
    char updAns;
    cout << "Do you want to display updated data? (y or n): ";
    cin >> updAns;
    if (updAns == 'y' || updAns == 'Y') 
	{
        cout << "***** Students Updated Data *****" << endl;
        for (int i = 0; i < totalST; i++) 
		{
            if (s[i] != nullptr) 
			{
                s[i]->getData();
                 cout << endl;
            }
        }

        cout << "***** Courses Updated Data *****" << endl;
        for (int i = 0; i < totalST; i++) 
		{
            if (c[i] != nullptr) 
			{
                c[i]->getData();
                cout << endl;
            }
        }

        cout << "***** Grades Updated Data *****" << endl;
        for (int i = 0; i < totalST; i++) 
		{
            if (g[i] != nullptr) 
			{
                g[i]->getData();
                cout << endl;
            }
        }
        
		cout << "***** Teacher Updated Data *****" << endl;
        if (t1 != nullptr) 
	   {
            t1->getData();
       }
    }
	return 0;
}

