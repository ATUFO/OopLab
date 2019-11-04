// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
   GradeBook( string, string );   // constructor initializes course name and instructor name
   void setCourseName( string ); // function to set the course name
   string getCourseName(); // function to retrieve the course name
   /* write code to declare a get function for the instructor's name */
   string getInstructorName();
   /* write code to declare a set function for the instructor's name */
   void setInstructorName(string); // function to set the instructor's name
   void displayMessage(); // display welcome message and instructor name
private:
   string courseName; // course name for this GradeBook
   string instructorName; // instructor name for this GradeBook
}; // end class GradeBook  
