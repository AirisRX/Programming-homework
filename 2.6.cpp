// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;

class Student
{
    public:
    string GautiVarda();
    void IvestiVarda();
    string GautiPavarde();
    void IvestiPavarde();
    void GautiKreditus();
    void IvestiKreditus();
    void GautiIvertinimus();
    void IvestiIvertinimus();
    double GautiVidurki();
    void VidurkioApskaiciavimas();

    private:
    string Vardas;
    string Pavarde;
    int kreditai [5];
    int ivertinimai [5];
    double vidurkis;
};

string Student::GautiVarda()
{
    return Vardas;
}

void Student::IvestiVarda()
{
    cout << "Studento vardas: ";
    cin >> Vardas;
}

string Student::GautiPavarde()
{
    return Pavarde;
}

void Student::IvestiPavarde()
{
    cout << "Studento pavardė: ";
    cin >> Pavarde;
}

void Student::GautiKreditus()
{
    for (int i = 0; i < 5; i++)
    {
        cout << kreditai[i] << " ";
    }
    cout << endl;
}

void Student::IvestiKreditus()
{
    cout << "Įveskite 5 semestrų kreditus (atskirti tarpais): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> kreditai[i];
    }
}

void Student::GautiIvertinimus()
{
    for (int i = 0; i < 5; i++)
    {
        cout << ivertinimai[i] << " ";
    }
    cout << endl;
}

void Student::IvestiIvertinimus()
{
    cout << "Įveskite 5 semestrų įvertinimus (atskirti tarpais): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> ivertinimai[i];
    }
}

double Student::GautiVidurki()
{
    return vidurkis;
}

void Student::VidurkioApskaiciavimas()
{
    int t1 = 0, t2 = 0;
    for (int i = 0; i < 5; i++)
    {
        t1 = t1 + (kreditai[i] * ivertinimai[i]);
        t2 = t2 + (kreditai[i]);
    }
    vidurkis = t1 / t2;
}

int main()
{
    Student Studentas;
    Studentas.IvestiVarda();
    Studentas.IvestiPavarde();
    Studentas.IvestiKreditus();
    Studentas.IvestiIvertinimus();
    Studentas.VidurkioApskaiciavimas();

    cout << "Studento vardas: " << Studentas.GautiVarda() << endl;
    cout << "Studento pavardė: " << Studentas.GautiPavarde() << endl;
    cout << "Studento kreditai: ";
    Studentas.GautiKreditus();
    cout << "Studento įvertinimai: "; 
    Studentas.GautiIvertinimus();
    cout << "Studento 5 semestrų vidurkis: " << Studentas.GautiVidurki();

    return 0;
}