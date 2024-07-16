#include<iostream>
using namespace std;


class complex 
{
    private:

    float real;
    float img;

    public:
    complex(int real_value, int img_value)
    {
        real - real_value;
        img = img_value;
    }

    void set_parameters(int real, int img)
    {
        this->real = real;
        this->img = img;


    }

    void SqdistancefromOrigin()
    {
        float dist;

        dist = real*real + img*img;

        cout<<"the distence from origin is "<<dist;

        return;

    }
};
//i am a merchant and defining a class to store the amoung which the user guves to me the numberof days it has been since the user has given me money

class New_account
{
    public:

    int amount;

    int days;
    //since a constructor has no return type we dont need anything at the start like int,


    New_account(int amount_inital, int days_inital)

    
    {
        amount = amount_inital;
        days = days_inital;
        cout<<"The constructor is called";
        // No need to return anything
    }
    void print_account_details()
    {
        cout<<"The amount is"<<amount;
        cout<<"The number of days id"<<days<<endl;

    }
    ~New_account()
    {
        cout<<"The use of the object is complet now it is being destroyed";
    }

};
class motorbike
{
    public:

    int num_wheels;
    int ligths;
};

int main()

{

//now i will try to do while the object is being created itself

    New_account a(0,0);

    a.print_account_details();
    

    New_account b(100,5);
    cout<<"Here all the functioning and the calculation take place"<<endl;
    b.print_account_details();

    //this function needs to be called evry time the object is created to set the parameters 
    complex(3,3);
    complex(3,5);


    return 0;

}