#include <iostream>
#include <string>
using namespace std;
int main() {
  string signupUsername, signupPassword;
  string loginUsername, loginPassword;
  
  cout << "=== SIGN UP ===" << endl;
  cout << "Enter new username: ";
  cin >> signupUsername;
  cout << "Enter new password: ";
  cin >> signupPassword;
  
  cout << "\nAccount created successfully\n" << endl;
  
  cout << "=== LOG IN ===" << endl;
  cout << "Enter username: ";
  cin >> loginUsername;
  cout << "Enter password: ";
  cin >> loginPassword;
  
  if (loginUsername == signupUsername && loginPassword == signupPassword) {
        cout << "\nWelcome, " << loginUsername << "!" << endl;
    } else {
        cout << "\nIncorrect username or password." << endl;}

    return 0;
}