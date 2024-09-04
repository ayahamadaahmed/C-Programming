#include <iostream>
using namespace std;
/*
class Rectangle 
{
    private:
    float length;
    float width;
    public:
    Rectangle (float len , float wid): length (len) , width (wid) 
    {

    }
    ~Rectangle ()
    {
        cout << " The object life time is ended";

    }
    /*Rectangle ()
    {
        length = 0;
        width = 0;
    }
    void setlength (float len)
    {
        if  (len >= 0)
        {
            length = len;
        }
        else 
        {
            cout <<"Error";
        }
    }
    void setwidth (float wid)
    {
         if  (wid >= 0)
        {
            width = wid;
        }
        else 
        {
            cout <<"Error";
        }
    }
   /* void setArea ()
    {
        float area;
        area = length * width;
        cout << area << endl;

    }

    float getlength ()
    {
        return length;
    }
    float getwidgth ()
    {
        return width;
    }
    float getarea()
    {
        return width * length;
    }
};
int main ()
{
    Rectangle obj ( 3 , 2);

    /*obj.setlength(8);
    obj.setwidth(9);
    //obj.setArea();
    cout << "length of Rectangle is: "<< obj.getlength()<<endl;
    cout << "width of Rectangle is: "<< obj.getwidgth()<<endl;
    cout << "Area of Rectangle is: "<< obj.getarea()<<endl;
}*/
/*class Odometer 
{
    private:
    double FuelEfficiency;
    double MilesDriven;

    public:
    Odometer(): FuelEfficiency(0), MilesDriven(0)
    {

    }
    void setMilesDriven (double miles)
    {
        if (miles >= 0)
        {
            MilesDriven += miles;
        }
        else 
        {
            cout << "Error";
        }
    }
    void setFuelEfficiency (double efficiency)
    {
        FuelEfficiency = efficiency;
    }
    double GetfuelEfficiency ()
    {
        return FuelEfficiency;
    }
    double GetMilesDriven()
    {
        return MilesDriven;
    }
    double GetfuelConsumed ()
    {
        return MilesDriven / FuelEfficiency;
    }
    

};
int main ()
{
    Odometer obj;
    obj.setFuelEfficiency (25);
    obj.setMilesDriven (100);
    obj.setMilesDriven (50);
    cout << "Total trip of odometer is: " << obj.GetMilesDriven()<<endl;
    cout << "fuel efficiency of odometer is: " << obj.GetfuelEfficiency()<<endl;
    cout<< "fuel consumed of odometer is:  " <<obj.GetfuelConsumed()<<endl;
    return 0;
}*/
class polygon 
{
    protected:
    float height;
    float width;
    public:
    void setvalues (int h , int wid)
    {
        height = h;
        width = wid;
    }

};
class Rectangle : public polygon
{
    public:
    float GetArea ()
    {
        return height * width;
    }

};
class Triangle : public polygon
{
    public:
    float GetArea ()
    {
        return 0.5 * height * width;
    }

};

int main ()
{
    int h , wid;
    cout << "PLZ Enter value of height: ";
    cin >> h;
    cout << "PLZ Enter value of width: ";
    cin >> wid ;

    Rectangle rect;
    Triangle tri;
    rect.setvalues (h,wid);
    tri.setvalues (h,wid);
    cout << "Area of triangle is: "<<tri.GetArea() << endl;
    cout << "Area of Rectangle is: "<<rect.GetArea() << endl;

}