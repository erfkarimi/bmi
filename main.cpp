#include <iostream>
#include <string>
#include "math.h"

class Bmi{
    public:
    double weight;
    double height;
    double result;
    int age;
    std::string gender;
    std::string name;
    std::string lastName;
    std::string info;


    public:
    Bmi(){
        weight =0;
        height = 0;
        result = 0;
        age = 0;
        gender = "";
        name = "";
        lastName = "";
        info = "";
    }
    double fitness(){
        result = (weight)/pow(height, 2);

        return result;
    }
  
    void consider(){
        if(result <= 18.50){
            std::cout<<"You have Underweight"<<"\n";
        }
        else if(result > 18.50 && result <= 24.99)
        {
            std::cout<<"You have normal weight"<<"\n";
        }
        else if(result > 24.99 && result <= 30)
        {
            std::cout<<"You have Overweight"<<"\n";
        }
        else if(result > 30){
            std::cout<<"You are obese"<<"\n";
        }
    }
    void information(){
        std::cout<<"Do you want to see the result? [Y/n]:"<<"\n";
        std::cin>>info;
        if (info =="Y" || info == "y"){
        std::cout<<name<<" "<<lastName<<"\n";
        std::cout<<"Your fitness status :"<<"\n";
        consider();
        std::cout<<"Gender: "<<gender<<"\n";
        std::cout<<"Age:"<<age<<"\n";
        }
        else if(info == "N" || info == "n"){
            std::cout<<"Have a good time"<<"\n";
        }
    }
};

int main(){
    Bmi bmi;
    std::cout<<"Enter your name:"<<"\n";
    std::cin>>bmi.name;

    std::cout<<"Enter your last name:"<<"\n";
    std::cin>>bmi.lastName;

    std::cout<<"Enter your Gender:"<<"\n";
    std::cin>>bmi.gender;

    std::cout<<"Enter your Weight in kg:"<<"\n";
    std::cin>>bmi.weight;

    std::cout<<"Enter your Height in meter:"<<"\n";
    std::cin>>bmi.height;

    std::cout<<"Enter your Age:"<<"\n";
    std::cin>>bmi.age;

    bmi.fitness();
    bmi.information();


}