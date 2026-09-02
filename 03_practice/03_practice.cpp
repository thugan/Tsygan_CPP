#include <iostream>
using namespace std;

int main()
{
    char choise;
    cout << "[1] - France" << endl;
    cout << "[2] - Ukraine" << endl;
    cout << "[3] - Romania" << endl;
    cout << "[4] - Poland" << endl;
    cout << "[5] - Germany" << endl;
    cout << "Enter country : "; cin >> choise;
    switch (choise)
    {
    case '1':
        cout << "Paris is the capital" << endl;
        break;
    case '2':
        cout << "Kuiv is the capital" << endl;
        break;
    case '3':
        cout << "Buharest is the capital" << endl;
        break;
    case '4':
        cout << "Wrsau is the capital" << endl;
        break;
    case '5':
        cout << "Brelin is the capital" << endl;
        break;
    default:
        cout << "Idk this country" << endl;
        break;
    }
    char choise1;
    cout << "[1] - France" << endl;
    cout << "[2] - Ukraine" << endl;
    cout << "[3] - Romania" << endl;
    cout << "[4] - Poland" << endl;
    cout << "[5] - Germany" << endl;
    cout << "Enter country : "; cin >> choise1;
        if (choise1 == '1'){
            cout << "Paris is the capital" << endl;
    }
        else if (choise1 == '2'){
            cout << "Kuiv is the capital" << endl;
    }
        else if (choise1 == '3'){
            cout << "Buharest is the capital" << endl;
    }
        else if (choise1 == '4'){
            cout << "Wrsau is the capital" << endl;
    }
        else if (choise1 == '5'){
            cout << "Brelin is the capital" << endl;
    }
        else {
            cout << "Idk this country" << endl;
    }
    int day;
    cout << "Enter number day : "; cin >> day;
    switch (day)
    {
    case 1:
        cout << "Its Monday " << endl;
        cout << "Work day " << endl;
        break;
    case 2:
        cout << "Its Tuesday " << endl;
        cout << "Work day " << endl;
        break;
    case 3:
        cout << "Its Wednasday " << endl;
        cout << "Work day " << endl;
        break;
    case 4:
        cout << "Its Thursday" << endl;
        cout << "Work day " << endl;
        break;
    case 5:
        cout << "Its Friday " << endl;
        cout << "Work day " << endl;
        break;
    case 6:
        cout << "Its Saturday  " << endl;
        cout << "Weekend" << endl;
        break;
    case 7:
        cout << "Its Sunday" << endl;
        cout << "Weekend" << endl;
        break;

    default:
        cout << "Error day" << endl;
        break;
    }
    char day1;
    cout << "Enter number day : "; cin >> day1;
        if (day1 == '1') {
            cout << "Its Monday " << endl;
            cout << "Work day " << endl;
        }
        else if (day1 == '2') {
            cout << "Its Tuesday " << endl;
            cout << "Work day " << endl;
        }
        else if (day1 == '3') {
            cout << "Its Wednasday " << endl;
            cout << "Work day " << endl;
        }
        else if (day1 == '4') {
            cout << "Its Thursday" << endl;
            cout << "Work day " << endl;
        }
        else if (day1 == '5') {
            cout << "Its Friday " << endl;
            cout << "Work day " << endl;
        }
        else if (day1 == '6') {
            cout << "Its Saturday  " << endl;
            cout << "Weekend" << endl;
        }
        else if (day1 == '7') {
            cout << "Its Sunday" << endl;
            cout << "Weekend" << endl;
        }
        else {
            cout << "Error day" << endl;
        }
    int curse;
    cout << "[1]-NORTH" << endl;
    cout << "[2]-SOUTH" << endl;
    cout << "[3]-WEST" << endl;
    cout << "[4]-EAST" << endl;
    cout << "Enter the course of the ship : "; cin >> curse;
    switch (curse)
    {
    case 1:
        cout << "If the ship turns around, it will be heading SOUTH." << endl;
        break;
    case 2:
        cout << "If the ship turns around, it will be heading NORTH." << endl;
        break;
    case 3:
        cout << "If the ship turns around, it will be heading EAST." << endl;
        break;
    case 4:
        cout << "If the ship turns around, it will be heading WEST." << endl;
        break;
    default:
        cout << "Idk this side" << endl;
        break;
    }
    char curse1;
    cout << "[1]-NORTH" << endl;
    cout << "[2]-SOUTH" << endl;
    cout << "[3]-WEST" << endl;
    cout << "[4]-EAST" << endl;
    cout << "Enter the course of the ship : "; cin >> curse1;
    if (curse1 == '1') {
        cout << "If the ship turns around, it will be heading SOUTH." << endl;
    }
    else if (curse1 == '2') {
        cout << "If the ship turns around, it will be heading NORTH." << endl;
    }
    else if (curse1 == '3') {
        cout << "If the ship turns around, it will be heading EAST." << endl;
    }
    else if (curse1 == '4') {
        cout << "If the ship turns around, it will be heading WEST." << endl;
    }
    else {
        cout << "Idk this side" << endl;
    }
    int animal;
    cout << "[1] - Monkey" << endl;
    cout << "[2] - Cow" << endl;
    cout << "[3] - Wolf" << endl;
    cout << "[4] - Sheep" << endl;
    cout << "[5] - Lion" << endl;
    cout << "[6] - Tiger" << endl;
    cout << "[7] - Pig" << endl;
    cout << "Enter animal : "; cin >> animal;
    switch (animal)
    {
    case 1:
        cout << "Herbivorous" << endl;
        break;
    case 2:
        cout << "Herbivorous" << endl;
        break;
    case 3:
        cout << "Predatory" << endl;
        break;
    case 4:
        cout << "Herbivorous" << endl;
        break;
    case 5:
        cout << "Predatory" << endl;
        break;
    case 6:
        cout << "Predatory" << endl;
        break;
    case 7:
        cout << "Herbivorous" << endl;
        break;

    default:
        cout << "Error animal" << endl;
        break;
    }
    char animal1;
    cout << "[1] - Monkey" << endl;
    cout << "[2] - Cow" << endl;
    cout << "[3] - Wolf" << endl;
    cout << "[4] - Sheep" << endl;
    cout << "[5] - Lion" << endl;
    cout << "[6] - Tiger" << endl;
    cout << "[7] - Pig" << endl;
    cout << "Enter animal : "; cin >> animal1;
    if (animal1 == '1') {
        cout << "Herbivorous" << endl;
    }
    else if (animal1 == '2') {
        cout << "Herbivorous" << endl;
    }
    else if (animal1 == '3') {
        cout << "Predatory" << endl;
    }
    else if (animal1 == '4') {
        cout << "Herbivorous" << endl;
    }
    else if (animal1 == '5') {
        cout << "Predatory" << endl;
    }
    else if (animal1 == '6') {
        cout << "Predatory" << endl;
    }
    else if (animal1 == '7') {
        cout << "Herbivorous" << endl;
    }
    else {
        cout << "Error animal" << endl;
    }
}