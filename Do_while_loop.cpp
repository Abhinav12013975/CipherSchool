  #include<iostream>
  using namespace std;
  int main()
  {
      int password;
      cout<<"Enter password";
      cin>>password;
      while(password<999999)
      {
          cout<<"password does not match:";
          cin>>password ;  
      }
      cout<<"user enter correct password";
    do {
        cin>>password;
    }while(password<999999);

    cout<<"user enter correct password";
       
  }