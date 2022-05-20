class Petsitter
{
private:
  char SitterID[10];
  char Country;
  char UserName[15];
  char SPassword[10];

public:
  Petsitter();

  Petsitter(char SitterID[], char Country, char UserName[], char SPassword[]);

  void getCheckappt();
  void setAcceptappt();
  void setRejectappt();

  ~Petsitter();

}; //Coded by P.A.G.N.Palihawadana - IT21177750