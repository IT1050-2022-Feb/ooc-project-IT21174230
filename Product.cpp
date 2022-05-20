#include"Product.h"
#include<cstring>

Product::Product(){}

Product::Product(int pProductID,char pProductName[],int pProductWeight,int pProductHeight,char pshipementMethod[],PetOwner*Pp){
  
  ProductID=pProductID;
  strcpy(ProductName,pProductName);
  ProductWeight=pProductWeight;
  ProductHeight=pProductHeight;
  strcpy(shipementMethod,pshipementMethod);
  p=Pp;
  
}
Product::Product(int vendorID1,char vendorName1[],char vendorDistrict1[],
char vendorCountry1[],int vendorID2,char vendorName2[],char vendorDistrict2[],
char vendorCountry2[]){

  ven[0]=new Vendor(vendorID1,vendorName1,vendorDistrict1,vendorCountry1);
  ven[1]=new Vendor(vendorID2,vendorName2,vendorDistrict2,vendorCountry2);
}
void Product::DisplayProductDetails(){}
void Product:: AddNewProduct(){}
void Product::UpdateProductPrice(){}

Product::~Product(){
  
  for(int i=0;i<SIZE;i++){
    delete ven[i];
  }
}

//IT21181160-V.D.Thrimavithana//