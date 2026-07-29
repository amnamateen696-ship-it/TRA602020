#include<iostream>
using namespace std;
struct Patient
 {
    int patientID;
    char name[30];
    float temperature;
    int severity;
};
Patient* mostCritical(Patient arr[], int n) 
{
    int maxIndex = 0;

    for(int i=1; i<n; i++)
    {
        if(arr[i].severity > arr[maxIndex].severity)
            maxIndex = i;
    }
    cout << "\nMost Critical Patient(s):\n";
    for(int i=0; i<n; i++)
    {
        if(arr[i].severity == arr[maxIndex].severity)
        {
            cout << "ID: " << arr[i].patientID
                 << "  Name: " << arr[i].name
                 << "  Temp: " << arr[i].temperature
                 << "  Severity: " << arr[i].severity << endl;
        }
    }
    return &arr[maxIndex];
}
Patient* findByID(Patient arr[], int n, int id) 
{
    for(int i=0; i<n; i++)
    {
        if(arr[i].patientID == id)
            return &arr[i];
    }
    return NULL;
}
void displayPatient(Patient *p) 
{
    cout << "ID: " << p->patientID << endl;
    cout << "Name: " << p->name << endl;
    cout << "Temperature: " << p->temperature << endl;
    cout << "Severity: " << p->severity << endl;
}
void inputPatient(Patient *p, int index) 
{
    cout << "\nEnter data for Patient " << index+1 << endl;
    cout << "Enter ID: ";
    cin >> p->patientID;
    cout << "Enter Name: ";
    cin >> p->name;
    cout << "Enter Temperature: ";
    cin >> p->temperature;
    cout << "Enter Severity (1-10): ";
    cin >> p->severity;
}
int main() {
    int n;
    cout << "=== Lahore General Hospital - Emergency Triage ===" << endl;
    cout << "Enter number of patients: ";
    cin >> n;
    Patient patients[50];
    for(int i=0; i<n; i++)
    inputPatient(&patients[i], i);
    mostCritical(patients, n);
    int id;
    char choice;
    do {
    cout << "\nEnter Patient ID to update: ";
    cin >> id;
    Patient *p = findByID(patients, n, id);
    if(p != NULL)
    {
    cout << "Enter new temperature: ";
    cin >> p->temperature;
    cout << "Enter new severity: ";
    cin >> p->severity;
    cout << "\nRecord Updated!\n";
    mostCritical(patients, n);
        }
        else
            cout << "Patient not found!\n";
        cout << "\nUpdate another patient? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
