#include<iostream>
using namespace std;
class arraylist
{
  private:
  struct controlbook
  {
     int capacity;
     int *arr_ptr;

  };
  controlbook *s;
  public:
  arraylist(int capacity)
  {
     s=new controlbook;
     s->capacity =capacity;
     s->arr_ptr=new int(s->capacity);
  }
  void addelement(int index,int data)
  {
      if(index>=0&&index<=s->capacity-1)
        s->arr_ptr(index)=data;
      else
      {
        cout<<"\n array index is invalid";
      }
  }
      void viewelement(int index,int &data)
      {
          if(index>=0&&index<=s->capacity-1)
        s->arr_ptr(index)=data;
      else
      {
        cout<<"\n array index is invalid";
      }

      }
      void viewlist()
      {
          int i;
          for(i=0;i<s->cap;i++)
            cout<<" "<<s->arr_ptr[i];
      }
};
int main()
{
    int data;
  arraylist list1(4);
  list1.addelement(0,32);
  list1.viewelement(0,data);
  cout<<"value in array is" <<data;


}
