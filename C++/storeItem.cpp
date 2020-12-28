#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

class Item{

private:

    string name;
    float price;
    int quantity;

public:

    Item(){

    }
    Item(string n, float p, int q);

    friend ifstream & operator>>(ifstream &ifs, Item &i);
    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};

int main()
{
    int n;
    string name;
    float price;
    int quantity;

    cout<<"Enter the number of items: ";
    cin>>n;

    vector<Item *> list;

    cout<<"Enter All item "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<" Item Name, Price and quantity ";
        cin>>name;
        cin>>price;
        cin>>quantity;

        list.push_back(new Item(name, price, quantity));
    }

    ofstream ofs("Items.txt");

    vector<Item *> :: iterator itr;

    for(itr = list.begin(); itr != list.end(); itr++)
    {
        ofs<<**itr;
    }
    Item item;

    ifstream ifs("Items.txt");

    for(int i=0;i<n;i++)
    {
        ifs>>item;

        cout<<"Item "<<i+1<<endl<<item<<endl;
    }
}

Item::Item(string n, float p, int q)
{
    name =n;
    price = p;
    quantity = q;
}
ofstream &operator<<(ofstream & ofs, Item &i)
{
    ofs<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs, Item &i)
{
    ifs>>i.name>>i.price>>i.quantity;
    return ifs;
}
ostream & operator<<(ostream &os, Item &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return os;
}
