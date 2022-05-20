displayDetails#include"RegisteredUser.h"
#include"Order.h"
#include"Pet.h"
#include"Product.h"
#include"Vendor.h"
#include"Veterinarian.h"
#include"Petsitter.h"
#include"Feedback.h"
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

int main(){
  Veterinarian vet1;
	Pet pet1;
  Vendor ven1;
  Product prod1;
  Order ord1;
  Petsitter sitter1;
  Feedback feed1;

  //setting details of the veterinarian
	vet1.setVetApptCharge(200.00);
  vet1.setUsername("Kim Taehyung");
  vet1.setPassword("130613bts");
  vet1.setName("Kim Taehyung");
  vet1.setAge(24);
  vet1.setDistrict("Seoul");
  vet1.setNoOfPets(1);
  //getting/displaying details of the veterinarian
  vet1.getUserDetails();
  vet1.getVetApptCharge();

  //setting details of the pet
	pet1.setPetName("Deedee");
	pet1.setPetAge(30);
	pet1.setSpecies("cat");
	pet1.setBreed("Maine-coon");
	pet1.setWeight(5.3); //assumption: all weights are given in kg
  //displaying details of the pet
	pet1.displayPetDetails();

  //vendor
  ven1.setUsername("Vinee Adele");
  ven1.setPassword("vinnie156");
  ven1.setAge(45);
  ven1.login();
  ven1.restocking();
	ven1.setvendorID(102);
	ven1.setvendorName("Vinee Adele");
	ven1.setvendorDistrict("Galle");
	ven1.setvendorCountry("Sri Lanka");
  ven1.getdisplayDetails();
	

  //product
  prod1.setpProductID(1001);
  prod1.setpProductName("Dog Shampoo");
  prod1.setpProductWeight(0.5);//assumption: all weights are given in kg
  prod1.setpProductHeight(100);//assumption: all weights are given in cm
  prod1.setpshipementMethod();
	prod1.setDisplayProductDetails();
	prod1.setAddNewProduct();
	prod1.setUpdateProductPrice();
  
  //Order
  ord1.setOrderId(12);
  ord1.setNoOfProducts(4);
  ord1.setPaymentMethod("Card Payment");
  ord1.setStatus("Shipped");
  ord1.setExpectedDeliveryDate(25-05-2022);
  ord1.setShipmentMethod("In air");
  ord1.getOrderDetails();


  //Petsitter
  sitter1.setSitterID(001);
  sitter1.setCountry("SriLanka");
  sitter1.setUserName("annie_adler");
  sitter1.setSPassword("adler1849");

  //Feedback
  feed1.setFd_id(001);
  feed1.setFd_title("Thanks for your comments! You make us better.");
  feed1.setFd_description("Great work on your last sitting. Thank you!!");
  
  feed1.setFd_type("Appreciation");
  
  feed1.setFd_comment("Annie has been an absolute blessing! Miyet (my kitten) loves her and does a happy purr upon her arrival. She is prompt, reliable, trustworthy and will update me when I’m out of town which is always comforting.  I don’t know what we would do without her!");


  return 0;
}

