// Encapsulation demonstration in C++
// Encapsulation is the process of wrapping up of data and function together in a group.
// This facilitates  member methods accessible within the class only, and nowhere outside the class.
// However, if any method of the class is made private, that cannot even be accessed inside that class.
// Yet, to access the private members, getters and setters are used
#include <iostream>
using namespace std;
class Employee
{
private:
    string Name, Company;
    int Age;

public:
    // getters and setters must be made public, in order to access them outside the class.
    // getters and setters are methods.
    void setName(string name) // Seteers mein argument pass krna hai.
    {
        Name = name;
    }
    string getName() // getters mein return lena hai.
    {
        return Name;
    }

    void setCompany(string company)
    {
        int flag = 0;
        for (int i = 0; i = company.length(); i++)
        {
            if (isdigit(company[i]))
                flag++;
        }
        if (flag == 0)
            Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void displaydetail()
    {
        cout << "Name: " << Name << "\n";
        cout << "Company: " << Company << "\n";
        cout << "Age: " << Age << "\n";
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{

    Employee employee1 = Employee("Nitin Singh", "Defence Resarch and Development Organization", 18);
    employee1.displaydetail();

    Employee employee2 = Employee("Muskaan Gauba", "Adobe", 19);
    employee2.displaydetail();

    employee1.setAge(39);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    employee2.setCompany("Cloud9");
    cout << employee2.getName() << " is working at " << employee2.getCompany();
}