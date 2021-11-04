//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
class MyClassvector2 {
    vector<int>& vec;
  
public:
    // this is the right way to assign
    // the reference of stl container
    MyClassvector2(vector<int>& arr)
        : vec(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};
class MyClassvector3 {
    vector<int> vec;
  
public:
    MyClassvector3(vector<int> v) 
    {
       vec = v;
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};


  

int main(int argc, char* argv[]) 
{
    vector<double> vd;
       vd.push_back(1);
       vd.push_back(2);
       vd.push_back(3);
       vd.push_back(55.4); 

  vector<int> vi; 
  //add 3 elements to the vi vector
      vi.push_back(1);
      vi.push_back(4);
      vi.push_back(-8);

    vector<string> vs;  
   // add 3 elements to the vs vector
   vs.push_back("a");
   vs.push_back("2");
   vs.push_back("3");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout <<"\nvalues in vi: \n";
    for(int vals :vi)
    {
      cout <<vals <<endl;
    }



   // display the 3 elements in the vs vector
   cout <<"\nvalues in vs: \n";
   for(string vals :vs)
   {
     cout <<vals<<endl;
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 


      
      //Continue with MyClassVector2 and MyClassVector3
cout <<"\nvector_as_class_member" <<endl;
 vector<int> vec1;
    for (int i = 1; i <= 5; i++)
        vec1.push_back(i);
    MyClassvector2 obj1(vec1);
  
obj1.print();

//MyClassvector3

cout <<"\nVector_as_Class_Member" << endl;
 vector<int> vec3;
    for (int i = 1; i <= 5; i++)
        vec3.push_back(i);
    MyClassvector3 obj3(vec3);
  
obj3.print(); 
vector <int> vint(10);
vint[0]=10;
vint[1]=20;
vint[2]=30;
vint[3]=40;
vint[4]=50;
vint[5]=60;
vint[6]=70;
vint[7]=80;
vint[8]=90;
vint[9]=100;
vector<int>::iterator it;
for(it=vint.begin(); it!=vint.end(); ++it){
  cout<<" "<<*it;
}

    /****Section_Name***STL_Iterators*/ 
    

    /****Section_Name*** Stack*/


    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }