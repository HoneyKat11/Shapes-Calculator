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

**Link:** [Security Policy](https://github.com/HoneyKat11/Shapes-Calculator/security/policy) <br />

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
the codebase and a record of who created the changes. This will keep the project secure from malicious changes or 
unauthorized access by a bad actor. The commits page of the project shows a record of all changes made. 

# To Do
### Item 4: Sanitize Inputs (Ensure Valid Input)
**Priority:** High <br />

**Difficulty:** Moderate <br />

**Link:** <br />

**Summary:** The purpose of this task will be to limit (or eliminate) buffer underflow and overflow as well as unwanted
inputs (i.e. a work being input when a number is required) to avoid exploitation of the code.

### Item 5: Add Smart Pointers to Point Class
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** <br />

**Summary:** The purpose of this task will be to add smart pointers to the point class and make any additional changes to 
ensure the smart pointers do not cause errors in the exisitng code. 

### Item 6: Add Smart Pointers to Line Class
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** <br />

**Summary:** The purpose of this task will be to add smart pointers to the line class and make any additional changes to 
ensure the smart pointers do not cause errors in the exisitng code. 

### Item 7: Accounting - Add Error Logging to Code
**Priority:** Middle <br />

**Difficulty:** Moderate <br />

**Link:** <br />

**Summary:** The purpose of this task will be to add a method of logging errors to the code so when it is run errors are 
documented to avoid purely relying on manual reporting of vulnerabilities in the code. 
