#include <iostream>
using namespace std;

class Student
{
private: // Scope: inside the class
    long long id;
    int score;
public:
    Student(long long id, int score)
    {
        this->id = id;
        this->score = score;
    }

    explicit Student(long long id)
    {
        this->id = id;
        score = 0;
    }

    long long getId() const { return id; }
    int getScore() const { return score; }

    void setScore(int score) { this->score = score; }
};

int main()
{
    Student s1(6510400000, 181);
    Student s2(5910405678);
    // Student s_error = 8710452889;

    cout << s1.getId() << " " << s1.getScore() << endl;
    cout << s2.getId() << " " << s2.getScore() << endl;
    
    s2ptr->setScore(21);
    cout << s2.getId() << " " << s2.getScore() << endl;

    Student *s2ptr = &s2;
    Student &s2ref = s2;

    s2ref.setScore(21 + 35);
    cout << s2.getId() << " " << s2.getScore() << endl;

    Student *s3 = new Student(8710452673, 876);
    cout << s3->getId() << " " << s3->getScore() << endl;

    delete s3;
}