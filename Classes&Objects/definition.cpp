/*
Imagine a Car, it will have properties (attributes) like name, model number, specification, etc and will have functions like steer and accelerate.
but Mercedes and Audi will have different data in each category. though the data will differ, the categories on which they both are compared are same.

Classes: Class is a blueprint or template for creating objects that defines a set of attributes (data) and behaviors (methods) that the objects will have. 
         It provides a way to organize and structure code by grouping related data and functions together.
         In the above example, CAR was a class.
Objects: An object is an instance of a class, created from the blueprint defined by the class. 
         It represents a specific entity with its own set of data values and behaviors.
         In the above example, Mercedes and Audi were two different objects. they can be created and destroyed in runtime.
*/
//syntax for Class
/*
class classname
{
    data_type variable_name;
    access_modifier_name:
    function_declaration_and_definition()
    {
        -------
        -------
    );
};
*/
#include <iostream>
using namespace std;

class Car  // class name
{
     int current_speed,to_speed; // data members/Attributes/Object variables, should be private
     string model_name;
 public:
     void accelerate()
     {
          current_speed++;
     };
     void steer()
     {
          cout<<"Turning"<<endl;
     }
     void setspeed()
     {
          cout<<"Enter Speed"<<endl;
          cin>>current_speed;
     }
};

int main()
{
    Car Mercedes, Audi;
    Mercedes.setspeed();
    Mercedes.accelerate();
    Audi.setspeed();
    Audi.steer();
    return 0;
}
