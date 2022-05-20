#include"Vendor.h"
#include<cstring>

Vendor::Vendor(){
  
}
Vendor::Vendor(int PvendorID,char PvendorName[],char PvendorDistrict[],char PvendorCountry[]){
  
  vendorID=PvendorID;
  strcpy(vendorName,PvendorName);
  strcpy(vendorDistrict,PvendorDistrict);
  strcpy(vendorCountry,PvendorCountry);
  
}
void Vendor:: login(){
  
}
void Vendor::sellingProducts(){
  
}
void Vendor::displayDetails(){
  
}
void Vendor::restocking(){
  
}
Vendor::~Vendor(){
  
}


//IT21181160-V.D.Thrimavithana//