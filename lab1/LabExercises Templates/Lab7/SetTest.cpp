// Lab 7: SetTest.cpp
// Driver program for class IntegerSet.
#include <iostream>
using namespace std;

#include "IntegerSet.h" // IntegerSet class definition

int main()
{
   IntegerSet a;
   IntegerSet b;
   IntegerSet c;
   IntegerSet d;
   
   cout << "Enter set A:\n";
   a.inputSet();
   cout << "\nEnter set B:\n";
   b.inputSet();

   c = a.unionOfSets(b); // set c is a union b
   d = a.intersectionOfSets(b); // set d is a intersection b

   cout << "\nUnion of A and B is:\n"; // display and c d
   c.printSet();
   cout << "Intersection of A and B is:\n";
   d.printSet();

   if (a.isEqualTo(b)) // check a equal to b 
      cout << "Set A is equal to set B\n";
   else
      cout << "Set A is not equal to set B\n";

   cout << "\nInserting 77 into set A...\n"; // insert 77 to a
   a.insertElement(77);
   cout << "Set A is now:\n";
   a.printSet();

   cout << "\nDeleting 77 from set A...\n"; // delete 77 from a
   a.deleteElement(77);
   cout << "Set A is now:\n";
   a.printSet();

   const int arraySize = 10; // use int[] to initalize a IntegerSet
   int intArray[arraySize] = {25, 67, 2, 9, 99, 105, 45, -5, 100, 1};
   IntegerSet e(intArray, arraySize);

   cout << "\nSet e is:\n";
   e.printSet();

   cout << endl;
} // end main
