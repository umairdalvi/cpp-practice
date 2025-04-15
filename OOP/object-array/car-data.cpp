#include <iostream>
using namespace std;

class Car{
    private:
        string make;
        string model;
        string color;

    public:
        void setCarData(string, string, string);
        void getCarData();
};

void Car::setCarData(string make, string model, string color){
    
    this->make=make;
    this->model=model;
    this->color=color;
}

void Car::getCarData(){

    cout<<this->make<<endl;
    cout<<this->model<<endl;
    cout<<this->color<<endl;
}

int main() {

    Car gadi[3];
    string make,model,color;

    for(int i=0;i<3;i++){

        cout<<"enter make: ";
        getline(cin, make);

        cout<<"enter model: ";
        getline(cin, model);

        cout<<"enter color: ";
        getline(cin, color);

        gadi[i].setCarData(make, model, color);
        cout<<endl;
    }

    for(int i=0;i<3;i++){

        gadi[i].getCarData();
        cout<<endl;
    }

    return 0;
}