#include <iostream>
#include <string>

using namespace std;

class Aspirant : public Student
{
private:
    string candidate_work;

public:
    Aspirant(string name, string surname, string father_name, DateTime birthday, string address, string phone_number, DateTime study_start, string candidate_work)
        : Student(name, surname, father_name, birthday, address, phone_number, study_start)
    {
        SetCandidateWork(candidate_work);
    }

    void SetCandidateWork(string candidate_work)
    {
        this->candidate_work = candidate_work;
    }

    string GetCandidateWork() const
    {
        return candidate_work;
    }

    void Print() const
    {
        Student::ShowStudent();
        cout << "CandidateWork: " << candidate_work << endl;
    }
};