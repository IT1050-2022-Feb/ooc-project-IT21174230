#include"PetOwner.h"
#include"Vendor.h"
#define SIZE 2
class Product{

private:

int ProductID;
char ProductName[20];
int ProductWeight;
int ProductHeight;
char shipementMethod[20];
PetOwner*p;
Vendor*ven[SIZE];

public:

Product();
Product(int pProductID,char pProductName[],int pProductWeight,int pProductHeight,char pshipementMethod[],PetOwner*Pp);

Product(int vendorID1,char vendorName1[],char vendorDistrict1[],
char vendorCountry1[],int vendorID2,char vendorName2[],char vendorDistrict2[],char vendorCountry2[]);

void DisplayProductDetails();
void AddNewProduct();
void UpdateProductPrice();
~Product();

}

//IT21181160-V.D.Thrimavithana//