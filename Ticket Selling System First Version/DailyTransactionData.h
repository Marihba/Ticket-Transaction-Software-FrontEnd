// header file for the DailyTransactioClass
#ifndef DailyTransactionData_H
#define DailyTransactionData_H

class DailyTransactionData {
  private:
    std::string transactionCode;
    std::string username;  // use this for buyer's username as well
    std::string userType;
    float availableCredits;
    std::string sellerUsername;
    float refundCredits;
    std::string eventName;
    int numTicketsForSale;
    float ticketPrice;

    std::string toStrCodeTypeOne();
    std::string toStrCodeTypeTwo();
    std::string toStrCodeTypeThree();
    std::string floatToPrecision(float floatValue, int precision);

  public:
    // constructors

    //struct to differenciate between constructors with same parameter types
    struct CategoryOne{};
    struct CategoryTwo{};
    DailyTransactionData();
    DailyTransactionData(CategoryOne, std::string tcode, std::string uname,
      std::string utype, float creds);
    DailyTransactionData(CategoryTwo, std::string tcode, std::string bname,
       std::string sname, float refcreds);
    DailyTransactionData(std::string tcode, std::string ename, std::string sname,
       int tnum, float tprice);

    // string representation to store in transaction file
    std::string stringRepresentation();

};

#endif
