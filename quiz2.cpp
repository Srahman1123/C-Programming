Question 1:

int* func(int arr[], int size){

// decalare a new array to copy vaues of arr

int *res = new int[size];

for(int i=size-1;i>=0;i--){

res[size-i-1] = arr[i];

}

// returning the address of res array

return res;

}

Question 2:

class Car{

// private data members

private:

string make;

int yearModel;

double price;

bool isrearCamera;

public:

// default construtor

Car(){

make = "";

yearModel = 0;

price = 0.0;

isrearCamera = false;

}

// non default construtor

Car(string make, int yearModel, double price, bool isrearCamera){

this->make = make;

this->yearModel = yearModel;

this->price = price;

this->isrearCamera = isrearCamera;

}

// accessors

string getmake(); // will be defined at the end of the class

int getyearModel(){

return yearModel;

}

double getprice(){

return price;

}

bool getIsrearCamera(){

return isrearCamera;

}

// mutators

void setmake(string make){

this->make = make;

}

void setprice(double price){

this->price = price;

}

void setyearModel(int yearModel){

this->yearModel = yearModel;

}

void setIsrearCamera(bool isrearCamera); // it will be defined at the end of the class

};

// definations of getmake() and setIsrearCamera() outside the class

string Car::getmake(){

return make;

}

void Car::setIsrearCamera(bool isrearCamera){

this->isrearCamera = isrearCamera;

}
