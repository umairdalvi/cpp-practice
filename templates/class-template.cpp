#include <iostream>
using namespace std;

template <typename T>
class Book{
    private:
        T name;
        T author;

    public:
        Book(T name, T author){
            this->name=name;
            this->author=author;
        }

        void getBook(){
            cout<<this->name<<endl;
            cout<<this->author<<endl;
        }
};

int main() {

    Book<string> b1("Rich Dad", "Robert K.");

    b1.getBook();

    return 0;
}