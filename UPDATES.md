# Description
The purpose of this file is to keep documentation of changes and updates to the project to improve security. 

# Update History
## Completed Items
### Item 1: Ensure Libraries Are Up-To-Date
**Priority:** Middle <br />

**Difficulty:** Easy <br />

**Links:** 
- [iostream](https://cplusplus.com/reference/iostream/)
- [vector](https://cplusplus.com/reference/vector/vector/)
- [cmath](https://cplusplus.com/reference/cmath/) <br />

**Summary:** The libraries utilized in the project are standard libraries included in the core C++ language, so they will 
be updated with the language. An additional concern may be the version of C++ being utilized (C++ 17). However, this 
version is very secure compared to older versions of C++ that did not check for certain security concerns related to
[pointers and memory conservation](https://learn.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170).
For this task, research was completed regarding possible security concerns for the version of C++ and libraries used
in the project. The libraries utilized in the project are secure and up to date. 

### Item 2: Create Security Policy for Project
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** [Security Policy](https://github.com/HoneyKat11/Shapes-Calculator/commit/b8e770d3a957fadcd50fd018ba0598e427f7326b) <br />

**Summary:** This project did not have a security policy prior to being uploaded to GitHub. Now, a basic security policy
has been established to give users a method to report vulnerabilities and steps on how a malicious internal actor will
be handled. This security policy will provide guidance in the event that the codebase is compromised or some other
security event takes place. The only scenario currently possible is unauthorized access to the owner's GitHub account
which would allow a malicious actor to access and alter the codebase. 

### Item 3: Accounting - Tracking of Changes/Access to Codebase
**Priority:** High <br />

**Difficulty:** Moderate <br />

**Link:** [Commits to Master](https://github.com/HoneyKat11/Shapes-Calculator/commits/master) <br />

**Summary:** This project originally existed as a file on OneDrive. This storage method was secure, but did not provide a 
way to track changes to the code. Moving the project to a GitHub repository allows detailed tracking of every update to
the codebase and a record of who created the changes. This will help keep the project secure from malicious changes or 
unauthorized access by a bad actor. The commits page of the project shows a record of all changes made and can be used 
to identify individuals making unauthorized changes. 

### Item 4: Sanitize Inputs (Ensure Valid Input)
**Priority:** High <br />

**Difficulty:** Moderate <br />

**Link:** [Issue 4](https://github.com/HoneyKat11/Shapes-Calculator/issues/4)<br />

**Summary:** The purpose of this task was to eliminate the possibility of buffer underflow, buffer overflow,
and any unwanted input provided by the user. Avoiding these types of inputs will also prevent malicious
actors from taking advantage of code vulnerabilities. The issue was resolved by adding a function that 
verifies that numerical input is a float and prompts for re-entry in a loop until acceptable input
is provided by the user. The method used to validate input 
[can be found here](https://www.hackerearth.com/practice/notes/validating-user-input-in-c/).

### Item 5: Add Smart Pointers to Main Program
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** [Issue 5](https://github.com/HoneyKat11/Shapes-Calculator/issues/5)<br />

**Summary:** The purpose of this task was to add smart pointers (specifically, unique pointers) to the main program
to increase security and help prevent issues such as [memory leaks and buffer overflow](https://www.geeksforgeeks.org/smart-pointers-cpp/#). 
Pointers were mainly used within the vector that stored each type of shape created in the main program. Adding unique
pointers ensures that shapes cannot be easily manipulated by malicious actors. 

### Item 6: Accounting - Add Error Logging to Code
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** <br />

**Summary:** The purpose of this task will be to add a method of logging errors in the code so that when it is run errors are 
documented to avoid purely relying on manual reporting of vulnerabilities in the code. 

# Planning Issues
Documenting Planning issues which were not completed during initial planning for this project and how they can be implemented in future planning/projects.

# Reporting Code Issues
Fixing and providing a report on the fix of a code issue or software vulnerability. (link security policy)

# Online Repository Security
Explaining how the addition or use of an online repository has increased security related to...
## Access Control (Code Sharing/Distribution)

## Network Security

## Accounting Issues

# Security Testing Implementation
Explaining how any security testing that is implemented (or needs to be implemented with plan to implement).
