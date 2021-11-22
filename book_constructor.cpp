#include <iostream>
using namespace std;

class Book
{
private:
    string id;
    string title;
    int price;

public:
    Book()
    {
        cout << "created";
    }
    Book(string x, string y, int z)
    {
        id = x;
        title = y;
        price = z;
    }

    void print()
    {
        cout << "\n id :" << this->id;
        cout << "\n Title :" << this->title;
        cout << "\n Proice :" << this->price;
    }
};

int main()
{
    Book b1("B1", "Ramayan", 2000);
    Book b2("B2", "Mahabharat", 3000);
    Book b3("B3", "Mangal", 4000);
    b1.print();
    b2.print();
    return 0;
}
