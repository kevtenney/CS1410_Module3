#include <iostream>
using namespace std;

/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

//   Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/*   Main Program */
int main(int argc, char* argv[])
{
    //int t = 1;
    cout << "Enter info for first house\n";

    struct house firstHouse = InputHouse();
    cout << "\nEnter info for second house\n";



    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");

    PrintHouse(2, secondHouse);
    printf("\n\n");

    //Compare the prices of the two homes with a function
    int comparison = ComparePrices(firstHouse, secondHouse);
    //Switch statement for the 4 cases of comparision
    switch(comparison)
    {
        case 1:
            cout << "The first house is cheaper" << endl;
            break;
        case 2:
            cout << "The two houses are equally expensive" << endl;
            break;
        case 3:
            cout << "The second house is cheaper" << endl;
            break;
        case 4:
            cout << "Invalid comparison value. There must be a bug"<<endl;
            break;
    }
    return 0;
}
/*   Function Defenitions */
struct house InputHouse()
{
    //Create a copy of the structure house
    house h;
    //Get the address and price of home
    cout << "Please enter the street number: " << endl;
    cin >> h.streetNum;
    cout << "Please enter the street name: " << endl;
    cin >> h.streetName;
    cout << "Please enter the price of the house: " << endl;
    cin >> h.price;

    //return the structure back to where it was called from
    return h;
}

// int ComparePrices(struct house h1, struct house h2)
int ComparePrices(struct house firstHouse, struct house secondHouse)
{

    if ( firstHouse.price < secondHouse.price )
    {
        return 1;
    }
    else if ( firstHouse.price == secondHouse.price)
    {
        return 2;
    }
    else if (firstHouse.price > secondHouse.price)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

// void PrintHouse(int houseNum, struct house h)
void PrintHouse(int houseNum, struct house h)
{

    cout <<houseNum<<" House: at " << h.streetNum << " "
         << h.streetName << " " << "for "<< h.price;

}