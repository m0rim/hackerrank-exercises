#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    unsigned int age{};
    static unsigned int scount;
    static unsigned int pcount;
    virtual void putdata(){};
    virtual void getdata(){};
};

unsigned int Person::scount = 0;
unsigned int Person::pcount = 0;

class Professor: public Person {
public:
    int publications{};
    unsigned int cur_id{};
    
    Professor(){
        this->pcount++;
        this->cur_id = this->pcount;
    }
    
    void getdata() {
        cin >> this->name;
        cin >> this->age;
        cin >> this->publications;
    }
    
    void putdata() {
        cout << this->name <<" "<< this->age <<" "<< this->publications <<" "<< this->cur_id << endl;
    }
};

class Student: public Person {   
public:
    vector<int> marks;
    unsigned int cur_id{};
    
    Student(){
        this->scount++;
        this->cur_id = this->scount;
    }
    void getdata() {
        int mark{};
        cin >> this->name;
        cin >> this->age;
        for(int i = 0; i < 6; i++) {
            cin >> mark;
            this->marks.push_back(mark);
        }
    }
    
    void putdata() {
        int sum{};
        for (int i = 0; i < 6; i++) {
            sum += this->marks[i];
        }
        cout << this->name <<" "<< this->age <<" "<< sum <<" "<< this->cur_id << endl; 
    }   
};


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

