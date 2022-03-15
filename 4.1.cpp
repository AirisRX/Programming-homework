// Airidas Rupšas - JNII21

#include <iostream>

using namespace std;
const int dalkiekis = 6;

class Asmuo
{
    protected:
    string vardas;
    string pavarde;
    int amzius;

    public:
    void gautiVarda();
    void gautiPavarde();
    int gautiAmziu() {return amzius;}
    void ivestiVarda();
    void ivestiPavarde();
    void ivestiAmziu() 
    {
        cout << "Studento amžius: ";
        cin >> amzius;
    }
};

class Studentas : public Asmuo
{
    protected:
    int studID;
    string dalykas [dalkiekis];
    int vertinimas [dalkiekis];
    double vidurkis;

    public:
    void gautistudID() {cout << "Studento ID: " << studID << endl;}
    void gautiDalyka();
    void gautiVertinima();
    void ivestistudID() 
    {
        cout << "Įveskite studento ID: ";
        cin >> studID;
    }
    void ivestiDalyka();
    void ivestiVertinima();
    void gautiVidurki();
    void VidurkioApskaiciavimas();
};

void Asmuo::ivestiVarda()
{
    cout << "Studento vardas: ";
    cin >> vardas;
}

void Asmuo::gautiVarda()
{
    cout << "Studento vardas: " << vardas << endl;
}

void Asmuo::ivestiPavarde()
{
    cout << "Studento pavardė: ";
    cin >> pavarde;
}

void Asmuo::gautiPavarde()
{
    cout << "Studento pavardė: " << pavarde << endl;
}

void Studentas::ivestiDalyka()
{
    cout << "Įveskite " << dalkiekis << " dalykus (atskirti tarpais): ";
    for (int i = 0; i < dalkiekis; i++)
    {
        cin >> dalykas[i];
    }
}

void Studentas::gautiDalyka()
{
    cout << "Studento dalykai: ";
    for (int i = 0; i < dalkiekis; i++)
    {
        cout << dalykas[i] << " ";
    }
    cout << endl;
}

void Studentas::ivestiVertinima()
{
    cout << "Įveskite " << dalkiekis << " dalykų įvertinimus (atskirti tarpais): ";
    for (int i = 0; i < dalkiekis; i++)
    {
        cin >> vertinimas[i];
    }
}

void Studentas::gautiVertinima()
{
    cout << "Studento vertinimai: ";
    for (int i = 0; i < dalkiekis; i++)
    {
        cout << vertinimas[i] << " ";
    }
    cout << endl;
}

void Studentas::gautiVidurki()
{
    cout << "Studijų dalykų vidurkis: " << vidurkis << endl;
}

void Studentas::VidurkioApskaiciavimas()
{
    double l = 0;
    for (int i = 0; i < dalkiekis; i++)
    {
        l +=  vertinimas[i];
    }
    vidurkis = l / dalkiekis;

}

int main()
{
    Studentas Student;

    Student.ivestiVarda();
    Student.ivestiPavarde();
    Student.ivestiAmziu();
    Student.ivestistudID();
    Student.ivestiDalyka();
    Student.ivestiVertinima();

    Student.gautiVarda();
    Student.gautiPavarde();
    Student.gautiAmziu();
    Student.gautistudID();
    Student.gautiDalyka();
    Student.gautiVertinima();
    Student.VidurkioApskaiciavimas();
    Student.gautiVidurki();

    return 0;
}