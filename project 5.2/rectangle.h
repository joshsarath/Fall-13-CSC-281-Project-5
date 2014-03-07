class rectangle
{
public:
    rectangle(float=0, float=0); // constructor for Triangle object
    int getArea(float, float); // member function to return area of rectangle
private:
    float length_1, length_2, area;
};

class square:public rectangle
{
public:
    square(float=0); //constructor, only 1 side length
private:
    float length;
};

class cube: public rectangle
{
public:
    cube(float); //constructor, only one length needed
    long getVolume(float); //volume needs extra dimension
private:
    float length;
};