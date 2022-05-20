class RegisteredUser
{
  protected:
    char Username[10];
    char Password[10];
    char Name[20];
    int Age;
    char District[10];
    int NoOfPets;

  public:
    RegisteredUser();
    RegisteredUser(const char pUsername[],const char 
        pPassword[],const char pName[],int pAge,const char 
        pDistrict,int pNoOfPets);

    void setUsername(const char pUsername[]);
    void setPassword(const char pPassword[]);
    void setName(const char pName[]);
    void setAge(int pAge);
    void setDistrict(const char pDistrict[]);
    void setNoOfPets(int pNoOfPets);
    void getUserDetails();

    ~RegisteredUser();
};

//Coded by IT21171024