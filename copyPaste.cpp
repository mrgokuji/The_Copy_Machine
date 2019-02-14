//Program to copy a file from directory to another

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  char src[20] ;
  char trgt[20];
  cout<<"enter the path of file from where you want to copy";
  cin>>src;
  cout<<"enter the path of file  where you want to copy";
  cin>>trgt;


  ifstream f(src, ios::in | ios::binary);//for input in binary mode


  ofstream f1(trgt, ios::out | ios::binary);//for output in binary mode

  //test open state
  if(! (f.is_open() && f1.is_open()))
  {
    cout<<"\n File open failed ";
    return 1;//exit failure
  }

  
  int data;

  while((data = f.get()) != -1)
    f1.put(data);

  f.close();
  f1.close();

  cout<<"\n File Copied";
  return 0;
}
