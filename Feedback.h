class Feedback
{
private:
  int Fd_id[5];
  char Fd_title;
  char Fd_description;
  char Fd_type;
  char Fd_comment;

public:
  Feedback();
  Feedback(int Fd_id[], char Fd_title, char Fd_description, char Fd_type, char Fd_comment);

  void setaddFeedback(int Fd_id);
  void seteditFeedback(char Fd_description, char Fd_comment, char Fd_title);
  void setdeleteFeedback(int Fd_id);
  void getsearchFeedback();

  ~Feedback();
}; //Coded by P.A.G.N.Palihawadana - IT21177750