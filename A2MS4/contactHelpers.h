/* ------------------------------------------------------------------

Name: Tracy Nguyen
Student number: 127270171
Email: tnguyen157@myseneca.ca
Section: SQQ
Date: April 2018

---------------------------------------------------------------------

Assignment: 2
Milestone:  4

---------------------------------------------------------------------

Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetative tasks.

---------------------------------------------------------------------*/



// HINT: 
// This header file now has functions with parameters referring to 
// the struct Contact type so be sure to include the contacts.h header:


//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------



// +--------------------------------------------------+
// |  NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function prototypes below...              |
// +--------------------------------------------------+



// Clear the standard input buffer

void clearKeyboard(void);

// pause
// Put function prototype below:

void pause(void);

// getInt
// Put function prototype below:

int getInt(void);

// getIntInRange
// Put function prototype below:

int getIntInRange(int, int);

// yes
// Put function prototype below:

int yes(void);

// menu
// Put function prototype below:

int menu(void);

// ContactManagerSystem
// Put function prototype below:

void ContactManagerSystem(void);


// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put new function prototypes below...            |
// +-------------------------------------------------+



// Generic function to get a ten-digit phone number (provided for you)

void getTenDigits(char[]);

// findContactIndex (provided for you)

int findContactIndex(const struct Contact[], int, const char[]);

// displayContactHeader
// put function prototype here:

void displayContactHeader(void);

// displayContactFooter:
// put function prototype here:

void displayContactFooter(int);

// displayContact:
// put function prototype here:

void displayContact(const struct Contact*);

// displayContacts:
// put function prototype here:

void displayContacts(const struct Contact[], int);

// searchContacts:
// put function prototype here:

void searchContacts(const struct Contact[], int);

// addContact:
// put function prototype here:

void addContact(struct Contact[], int);

// updateContact:
// put function prototype here:

void updateContact(struct Contact[], int);

// deleteContact:
// put function prototype here:

void deleteContact(struct Contact[], int);

// sortContacts:
// put function prototype here:

void sortContacts(struct Contact[], int);