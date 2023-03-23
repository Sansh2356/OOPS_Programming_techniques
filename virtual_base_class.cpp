#include <iostream>
#include <string>
using namespace std;
class student // base class//
{
protected:
    int roll_num;

public:
    void set_roll_num(int f)
    {
        roll_num=f;
    }
    void print_roll_num()
    {
        cout << "the roll number is"
             << "  " << roll_num << endl;
    }
};
class test : virtual public student // inherited class-1//
{
protected:
    int maths_scores;
    int physics_scores;

public:
    void set_scores(int mat, int py)
    {
        maths_scores=mat;
        physics_scores=py;
    }
    void print_marks()
    {
        cout << "the marks obtained in maths is:" << maths_scores << endl;
        cout << "the marks obtained in phyiscs is:" << physics_scores << endl;
    }
};
class sports : virtual public student // inherited class-2//
{
protected:
    int sc;

public:
    void set_sc(int sports_Score)
    {
        sc = sports_Score;
    }
    void print_sports_scores()
    {
        cout << "the scores obtained in sports is:" << sc << endl;
    }
};
class result : public test, public sports // inherited class from class 1 and class 2//
{
protected:
    int total_scores;

public:
    void total()
    {
        cout << "the total sum of scores obtained in sports and tests are:" << sc + maths_scores + physics_scores << endl;
    }
};
int main()
{
    result ro;
    ro.set_roll_num(5465);
    ro.print_roll_num();
    ro.set_sc(92);
    ro.print_sports_scores();
    ro.set_scores(43, 76);
    ro.print_marks();
   ro.total();
}
