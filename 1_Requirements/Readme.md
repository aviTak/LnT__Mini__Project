# Requirements
## Introduction
This project “Library Management System In C Programming” is complete and totally-error free clean code. The main goal of this project is to add books, view books, search books, edit books record and delete books within this system. It is named as “Library Management System”.

## Research
As the library and information services community seeks to cope with new patterns of information provisions, new technology and new financial circumstances, the latest research, innovative theory and organizational best practice are all combined in the journal, Library Management . This world-class information resource offers international perspectives on the critical issues facing library management by publishing articles which report contemporary thought whilst also exploring practical implications for those involved in teaching and practice. Library Management provides knowledge and practical perspectives on all aspects of the management of libraries and information services by drawing contributions from distinguished international figures. All of this builds into an informative, refereed journal, which will prove invaluable to managing a library or information service cost effectively, while meeting the needs of its users.

## Cost and Features
### Features of Library Management System
* Add books
* Search books
* View books
* Edit book's record
* Delete books
* Close application

## Defining Our System
![State Diagram](https://4.bp.blogspot.com/-X7xkxpUUNWI/T26v6BHDnTI/AAAAAAAAANM/uUG5U0QFxwU/s1600/uml+state+diagram+for+library+mgmt+Librarian.JPG)

## SWOT ANALYSIS
* ### Strengths
Assessing a library's strengths, areas in which it is already successful, includes looking at staff skills and competencies, programming, budget maintenance and community relations. Planning for the library's future based on its strengths should include ways to maintain and improve existing success.

* ### Weaknesses
Analyzing a library's weaknesses also means evaluating internal operations. G. Edward Evans and Patricia Layzell Ward, authors of "Management Basics for Information Professionals," point out that weaknesses may lie in the same areas as strengths. Careful analysis of library weaknesses suggests which areas need improvement. Weaknesses also identify areas that need attention to reduce the negative impact of their weaknesses.

* ### Opportunities
Factors outside the library itself should be evaluated to see what could be acted upon to benefit the library. Library opportunities may present themselves in "economic, political/legal, technological, or sociocultural environments," says Anthony C. Danca in his analysis of SWOT. For example, awareness of a high economic status of the library's main patron base provides a population likely to participate in fund-raising activities.

* ### Threats
Analyzing library threats also means evaluating factors outside the library that hinder its success. Like opportunities, many threats stem from the economic and political environment, says Danca. For example, economic downturns threaten to reduce the budgets of publicly funded libraries. Maintaining current awareness of threats allows the library administration to plan and act. This area requires frequent attention because the external environment often changes quickly.

# 4W&#39;s and 1&#39;H

## Who:

Schools, colleges and institutions have started using this library management system.

## What:

Building an automated library management to have a safe and secure record of book entries in a real library.

## When:

2010s–present: the rise of cloud based solutions
The use of cloud-based library management systems has increased drastically since the rise of cloud technology started.

Many modern cloud-based solutions allow automated cataloging by scanning a book's ISBN.

## Where:

This problem is expected to surface in all parts of the world.

## How:

This problem may cause ineffective management and hence there can be a huge amount of data redundancy and time wastage and also loss of information.

# Detail requirements
## High Level Requirements: 
| ID | Description | Status | 
| ----- | ----- | --------- |
| 1 | User shall be able to add new book record | Implemented | 
| 2 | User shall be able to read a book record | Implemented |
| 3 | User shall be able to update a book record | Implemented |
| 4 | User shall be able to delete a book record | Implemented |
| 5 | User shall be able to save records in a file | Implemented |
| 6 | User shall be able to read data from a file | Implemented |
| 7 | Data should not be lost in case of failure | Future |
| 8 | Data should always be stored when closing the system | Future |


##  Low level Requirements:
 
| ID | Description | Status (Implemented/Future) |
| ------ | --------- | ----- |
| 1 | New record shall be added by providing all the asked information and the id should be unique or else user record should not be accepted. | Implemented |
| 2 | Reading patient data should be possible in 2 ways, first being by searching by id of a patient and second by printing all the records available | Implemented |
| 3 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | Future |
| 4 | If user searches for an invalid ID "No Record Found" message should be displayed | Implemented |
| 5 | User need to search by id for the user record to be updated, if no such record is available then "No Record Found" Message should be displayed | Future |
| 6 | User need to search by id for the user record to be deleted, if no such record is available then "No Record Found" Message should be displayed | Future |
| 7 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | Future |
| 8 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | Future |
| 9 | When user Log off the system, message shall be prompted asking the user to save new records to file before exiting or not | Future |
