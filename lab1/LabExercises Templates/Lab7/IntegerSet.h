// Lab 7: IntegerSet.h
// Header file for class IntegerSet
#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class IntegerSet
{
public:
   IntegerSet() //default constructor
   {
      emptySet();
   }

   IntegerSet(int[], int);                     // constructor that takes an initial set
   IntegerSet unionOfSets(const IntegerSet &); // union
   IntegerSet intersectionOfSets(const IntegerSet &);
   void emptySet();                           // set all elements of set to 0
   void inputSet();                           // read values from user
   void insertElement(int);                   // define a member funtion to add an element to set
   void deleteElement(int);                   // define a member funtion to delete an element of set
   void printSet() const;                     // define a member funtion to show all element
   bool isEqualTo(const IntegerSet &r) const; // a member funtion to check Equally

private:
   int set[101]; // range of 0 - 100

   int validEntry(int x) const // a util funtion to valid the element which will be add to set
   {
      return (x >= 0 && x <= 100);
   }
};

#endif
