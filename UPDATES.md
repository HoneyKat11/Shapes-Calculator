# Description
The purpose of this file is to keep documentation of changes and updates to the project to improve security. 

# Update History
## Completed Issues
### Issue 1: Ensure Libraries Are Up-To-Date
**Priority:** Middle <br />

**Difficulty:** Easy <br />

**Links:** 
- [iostream](https://cplusplus.com/reference/iostream/)
- [vector](https://cplusplus.com/reference/vector/vector/)
- [cmath](https://cplusplus.com/reference/cmath/) <br />

**Summary:** The libraries utilized in the project are standard libraries included in the core C++ language, 
so they will be updated with the language. An additional concern may be the version of C++ being utilized 
(C++ 17). However, this version is very secure compared to older versions of C++ that did not check for certain 
security concerns related to [pointers and memory conservation](https://learn.microsoft.com/en-us/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170). 
For this task, research was completed regarding possible security concerns for the version of C++ and libraries 
used in the project. The libraries utilized in the project are secure and up to date. 

### Issue 2: Create Security Policy for Project
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** [Security Policy](https://github.com/HoneyKat11/Shapes-Calculator/security/policy) <br />

**Summary:** This project did not have a security policy prior to being uploaded to GitHub. Now, a basic 
security policy has been established to give users a method to report vulnerabilities and steps on how 
a malicious internal actor will be handled. This security policy will provide guidance in the event that 
the codebase is compromised or some other security event takes place. The only scenario currently possible 
is unauthorized access to the owner's GitHub account which would allow a malicious actor to access and 
alter the codebase. 

### Issue 3: Accounting - Tracking of Changes/Access to Codebase
**Priority:** High <br />

**Difficulty:** Moderate <br />

**Link:** [Commits to Master](https://github.com/HoneyKat11/Shapes-Calculator/commits/master) <br />

**Summary:** This project originally existed as a file on OneDrive. This storage method was secure, but did 
not provide a way to track changes to the code. Moving the project to a GitHub repository allows detailed 
tracking of every update to the codebase and a record of who created the changes. This will help keep the 
project secure from malicious changes or unauthorized access by a bad actor. The commits page of the project 
shows a record of all changes made and can be used to identify individuals making unauthorized changes. 

### Issue 4: Sanitize Inputs (Ensure Valid Input)
**Priority:** High <br />

**Difficulty:** Moderate <br />

**Link:** [Issue 4](https://github.com/HoneyKat11/Shapes-Calculator/issues/4)<br />

**Summary:** The purpose of this task was to eliminate the possibility of buffer underflow, buffer overflow, 
and any unwanted input provided by the user. Avoiding these types of inputs will also prevent malicious 
actors from taking advantage of code vulnerabilities. The issue was resolved by adding a function that 
verifies that numerical input is a float and prompts for re-entry in a loop until acceptable input is 
provided by the user. The method used to validate input [can be found here](https://www.hackerearth.com/practice/notes/validating-user-input-in-c/).

### Issue 5: Add Smart Pointers to Main Program
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** [Issue 5](https://github.com/HoneyKat11/Shapes-Calculator/issues/5)<br />

**Summary:** The purpose of this task was to add smart pointers (specifically, unique pointers) to the 
main program to increase security and help prevent issues such as [memory leaks and buffer overflow](https://www.geeksforgeeks.org/smart-pointers-cpp/#). 
Pointers were mainly used within the vector that stored each type of shape created in the main program. 
Adding unique pointers ensures that shapes cannot be easily manipulated by malicious actors. 

### Issue 6: Accounting - Add Error Logging to Code
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** [Issue 6](https://github.com/HoneyKat11/Shapes-Calculator/issues/7)<br />

**Summary:** The purpose of this task was to add a method of logging errors to the code so that when 
errors occur they are logged permanently with a timestamp. This will allow clear documentation of 
errors and allow easy identification of future improvements that can be made to the codebase. 
The source for the [logging class can be found here](https://rollbar.com/guides/cpp/cpp-error-logging/). 
The source for the [timestamp can be found here](https://www.techiedelight.com/get-current-time-and-date-in-cpp/).

# Planning Issues
Future planning and projects will include refining the additions made during this project and making
further additions to improve security. The first task will be to create a more robust logging process
and identifying other possible locations in the code where logs need to be made. For now, the logging 
class documents when there is a problem with validating input from the user. In the future, all
conditional statements in the code could include an "else" condition that creates a log if it is reached. 
After that, additional changes can be made based on additions made to the calculator to calculate other
types of shapes. 

# Reporting Code Issues
A report for each fix on the code is provided above under the "Completed Issues" section. The security
policy was created under Issue 2 and will be expanded upon as the project is improved over time. The
full security policy as of the current date [can be found here](https://github.com/HoneyKat11/Shapes-Calculator/security/policy).

# Online Repository Security
## Access Control
The use of an online repository has increased security related to access control because all access 
to the repository is automatically recorded in a log. A secure GitHub account owned by an authorized 
user is required to view the repository. Additionally, distribution of the code is controlled by the 
online repository. Individuals attempting to distribute the code need the appropriate permissions to 
make pull requests. 

## Network Security
The use of an online repository has increased security related to network security because the code 
is being secured in an online location that can only be accessed by authorized users. The code is 
not tied to a specific hardware location and requires a login, so any unauthorized access is prevented.

## Accounting Issues
The use of an online repository has increased security related to accounting issues because the 
repository will automatically track who accesses the code and exactly what code they use from
the repository. Any changes or pull requests made are logged which ensures that misuse of the code
in the repository can be easily traced back to the malicious actor.

# Security Testing Implementation
Security testing still needs to be implemented for this project. Future work on the project will 
include various tests to ensure the repository and code is secure. Currently, basic debugging tests
have taken place to test the logging class (Issue 6) and the input validation function (Issue 4)
which both resulted in confirmation that these new additions improve the security of the program.
In future work, the plan will be to conduct penetration testing to test the security of the 
repository. A combination of blackbox testing and whitebox testing will be used with users outside
the project to thoroughly test the security of the project.
