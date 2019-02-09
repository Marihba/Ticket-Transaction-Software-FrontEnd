// header file for the User.cpp
// declares all necessary information for User class

using namespace std;

class User {
  private:
    // member variables
    string username;
    string userAccountType;
    float availableCredit;

  public:
    // constructor
    User(string username, string userAccountType, float availableCredit);

    // non constructor methods (see User class for method documentation)
    void stringRepresentation(string username, string userType,
      float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    string createUser();
    string deleteUser();
    string sellTickets();
    string buyTickets();
    string refund();
    string addCreditStandardMode();
    string addCreditAdminMode();
};
