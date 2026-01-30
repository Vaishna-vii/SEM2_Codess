/*Q1) A smart library application maintains information about its members.
Design a C++ class to store Member ID, Member Name, Membership Level, and Total Books
Issued as private data members.
The system should allow member objects to be created in different ways:
 By providing complete member details
 By providing partial details where the membership level is set automatically
 By creating a member with default values
Provide suitable constructors, accessor and mutator functions. In the driver program, create
multiple member objects, update the number of books issued for one member, and display the
complete member details.*/
class library{
int memberID,memberLevel,totalBooksIssued;
char* memberName;
};