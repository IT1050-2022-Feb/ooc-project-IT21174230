#include"RegisteredUser"

class Vendor:Public RegisteredUser{

private:

int vendorID;
char vendorName[20];
char vendorDistrict[20];
char vendorCountry[20];

public:

Vendor();
Vendor(int PvendorID,char PvendorName[],char PvendorDistrict[],char PvendorCountry[]);
void login();
void sellingProducts();
void displayDetails();
void restocking();
~Vendor();

};


//IT21181160-V.D.Thrimavithana//