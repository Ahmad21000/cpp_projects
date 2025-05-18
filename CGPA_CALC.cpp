#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_COURSES = 50; // Maximum allowed courses
float percentage;
float grade = 4.0;

float calculateCGPA(const int credits[], const float gradePoints[], int numCourses) {
    if (numCourses <= 0) return 0.0f;

    float totalGradePoints = 0.0f;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++) {
        totalGradePoints += credits[i] * gradePoints[i];
        totalCredits += credits[i];
    }

    return totalGradePoints / totalCredits;
}

float getGradePoint(float percent) {
   for(float i = 85; i>=55; i--){
   	grade = grade;
   	if(percent == i){
   		
   	return grade;
   	exit(0);
	   }
	   if(percent >=85 && percent <=100){
	   	return 4.0;
	   }
	   
	    if(percent <0 || percent >100){
	   	cout<<"invalid percentage";
	   }
	    if (percent<55 && percent >0){
	   	cout<<"you are failed";
	   }
	   
   	grade = grade-0.1;
   }}

int main()
{
//    cout << "\nYour CGPA: " << cgpa << endl;
    int numCourses;
    cout << "Enter number of courses (max " << MAX_COURSES << "): ";
    cin >> numCourses;

    if (numCourses <= 0 || numCourses > MAX_COURSES)
	 {
        cout << "Invalid number of courses.\n";
        return 1;
    }

    int credits[MAX_COURSES];       // Fixed-size array for credits
    float gradePoints[MAX_COURSES]; // Fixed-size array for grade points

    for (int i = 0; i < numCourses; i++)
	 {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter credit hours: ";
        cin >> credits[i];

        float percent;
        do
		 {
            cout << "Enter your percentage ";
            cin >> percent;
            gradePoints[i] = getGradePoint(percent);
            if (gradePoints[i] < 0) cout << "Invalid grade!\n";
        } while (gradePoints[i] < 0);
    }

    float cgpa = calculateCGPA(credits, gradePoints, numCourses);
    cout << fixed << setprecision(2);
 cout << "\nYour CGPA: " << cgpa << endl;

}
