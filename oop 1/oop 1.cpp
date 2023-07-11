// oop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;

// Q 01
class tollBooth
{
    unsigned int cars;
    double money;
    char key;
public:
    tollBooth()
    {
        cars = 0;
        money = 0;
    }
    void payingcar(char enter)
    {
        key = enter;
        if (key == 'p' || key == 'P')
        {
            cars++;
            money = money + 0.50;
        }
    }
    void nonpaycar(char enter)
    {
        key = enter;
        if (key == 'n' || key == 'N')
        {
            cars++;
        } 
    }
    void show()
    {
        cout << "number of cars crossed the tollbooth = " << cars << endl;
        cout << "total money collected = " << money << " $" << endl;
    }
    ~tollBooth()
    {

    }
};

// Q 02
/*class romanType
{
    vector <char> rt[];
public:
    void set()
    {
        char ch;
        cout << "enter roman numeral\n press 0 at the end to asve the numeral: ";
        do 
        {
            cin >> ch;
            rt->push_back(ch);
        } while (ch != 0);
    }
    void print()
    {
        int n;
        cout << "how do you want to print it:\n" << "\t1 for roman\n" << "\t2 for decimal\n";
        cin >> n;
        if (n == 1)
        {
            cout << "roman type = ";
            for (auto i = rt->begin(); i != rt->end(); ++i)
            {
                cout << *i << " ";
            }
        }
    }
};*/
/*class romanType
{
private:
    string romanNum;
    int decimalNum;
    map<char, int> romanValues = { {'M', 1000},{'D', 500},{'C', 100},{'L', 50},{'X', 10},{'V', 5},{'I', 1} };

public:
    romanType(string rNum) {
        romanNum = rNum;
        decimalNum = convertToDecimal(rNum);
    }

    int convertToDecimal(string rNum) {
        int result = 0;
        int previousValue = 0;

        for (int i = rNum.size() - 1; i >= 0; i--) {
            int currentValue = romanValues[rNum[i]];
            if (currentValue < previousValue) {
                result -= currentValue;
            }
            else {
                result += currentValue;
            }
            previousValue = currentValue;
        }

        return result;
    }

    void printRomanNum() {
        cout << romanNum << endl;
    }

    void printDecimalNum() {
        cout << decimalNum << endl;
    }
};*/

// Q 03
/*class dayType
{
    string day;
public:
    dayType(string d)
    {
        day = d;
    }
    void setDay(string d)
    {
        day = d;
    }
    void printDay()
    {
        cout << "day entered = " << day + "day" << endl;
    }
    string returnDay()
    {
        return day;
    }
    string nextDay(string d)
    {
        if (day == "sun")
        {
            return "monday";
        }
        if (day == "mon")
        {
            return "tuesday";
        }
        if (day == "tue")
        {
            return "wednesday";
        }
        if (day == "wed")
        {
            return "thursday";
        }
        if (day == "thu")
        {
            return "friday";
        }
        if (day == "fri")
        {
            return "saturday";
        }
        if (day == "sat")
        {
            return "sunday";
        }
    }
    string prevDay()
    {
        if (day == "sun")
        {
            return "saturday";
        }
        if (day == "mon")
        {
            return "sunday";
        }
        if (day == "tue")
        {
            return "monday";
        }
        if (day == "wed")
        {
            return "tuesday";
        }
        if (day == "thu")
        {
            return "wednesday";
        }
        if (day == "fri")
        {
            return "thursday";
        }
        if (day == "sat")
        {
            return "friday";
        }
    }
    void calculate() 
    {
        string newDay;
        int num;
        cout << "enter number of days to add = ";
        cin >> num;
        int dayIndex = 0;

        if (day == "Sun") {
            dayIndex = 0;
        }
        else if (day == "Mon") {
            dayIndex = 1;
        }
        else if (day == "Tue") {
            dayIndex = 2;
        }
        else if (day == "Wed") {
            dayIndex = 3;
        }
        else if (day == "Thu") {
            dayIndex = 4;
        }
        else if (day == "Fri") {
            dayIndex = 5;
        }
        else if (day == "Sat") {
            dayIndex = 6;
        }

        int newDayIndex = (dayIndex + num) % 7;

        switch (newDayIndex) {
        case 0:
            newDay = "Sun";
            break;
        case 1:
            newDay = "Mon";
            break;
        case 2:
            newDay = "Tue";
            break;
        case 3:
            newDay = "Wed";
            break;
        case 4:
            newDay = "Thu";
            break;
        case 5:
            newDay = "Fri";
            break;
        case 6:
            newDay = "Sat";
            break;
        }

        cout<<"new day after adding "<<num<<" days = " << newDay;
    }
};*/

// Q 04
/*class ticTacToe
{
    char board[3][3];
public:
    ticTacToe()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = '-';
            }
        }
    }
    void printBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j];
                if (j != 2)
                {
                    cout << " | ";
                }
            }
            cout << "\n_________\n";
        }
    }
    bool valid(int row, int col)
    {
        if (row < 0 || row>2 || col < 0 || col>2)
        {
            return false;
        }
        if (board[row][col] != '-')
        {
            return false;
        }
        return true;
    }
    void move(int row, int col, char player)
    {
        board[row][col] = player;
    }
    bool gameOver()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '-')
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool winner(char player)
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            {
                return true;
            }
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            {
                return true;
            }
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        {
            return true;
        }
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~ticTacToe()
    {

    }
};*/

// Q 06
/*class circle
{
    float radius, x, y;
public:
    circle()
    {
        radius = 0;
        x = 0;
        y = 0;
    }
    circle(float r, float a, float b)
    {
        radius = r;
        x = a;
        y = b;
    }
    void setvalues(float r, float a, float b)
    {
        radius = r;
        x = a;
        y = b;
    }
    float area()
    {
        float area;
        area = 3.14 * radius * radius;
        return area;
    }
    float circumference()
    {
        float circum;
        circum = 2 * 3.14 * radius;
        return circum;
    }
    void print()
    {
        cout << "radius of circle = " << radius << endl;
        cout << "x coordinate of center = " << x << endl;
        cout << "y coordinate of center = " << y << endl;
    }
    ~circle()
    {

    }
};*/

// Q 07
/*class rectangle
{
    int length, width;
public:
    rectangle()
    {
        length = 1;
        width = 1;
    }
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area()
    {
        int area;
        area = length * width;
        return area;
    }
    int perimeter()
    {
        int per;
        per = 2 * (length + width);
        return per;
    }
    void set(int l, int w)
    {
        length = l;
        width = w;
    }
    void get()
    {
        cout << "length of rectangle = " << length << endl;
        cout << "width of rectangle = " << width << endl;
    }
    void draw()
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    ~rectangle()
    {

    }
};*/

// Q 05
/*class bankAccount
{
    string name;
    static int account_no;
    string type;
    double balance;
    double interest;
public:
    int num;
    bankAccount()
    {
        name = " ";
        type = ' ';
        balance = 0.0;
        interest = 0.0;
    }
    void setAtt()
    {
        cout << "enter account holder's name= ";
        cin >> name;
        cout << "enter account type:\n" << "\tchecking or saving\n";
     here:
        cin >> type;
        if (type == "checking" || type == "saving")
        {
            cout << "enter account balance= ";
            cin >> balance;
            cout << "interest rate = ";
            cin >> interest;
            srand(time(0));
            num = rand();
            account_no = num;
            cout << "account number = " << account_no << endl;
        }
        else 
        {
            cout << "invalid account type! retry :";
            goto here;
        }
    }
    ~bankAccount()
    {

    }
};
int bankAccount::account_no = 0;*/

// Q 08
/*class Time
{
    int hour, min, sec;
public:
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    void print()
    {
        cout << "entered time = " << hour << " : " << min << " : " << sec << endl;
    }
    void setHour(int h)
    {
        hour = h;
    }
    void setMin(int m)
    {
        min = m;
    }
    void setSec(int s)
    {
        sec = s;
    }
    void setTime(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    int Hour()
    {
        return hour;
    }
    int minute()
    {
        return  min;
    }
    int second()
    {
        return sec;
    }
    void tick()
    {
        if (sec < 60)
        {
            sec += 1;
        }
        else if (sec == 60)
        {
            min += 1;
        }
        else
        {
            cout << "invalid time";
        }
    }
    void add(Time& a, Time& b)
    {
        int mi,m,h,hr,sec = a.sec + b.sec;
        mi = a.min + b.min;
        hr = a.hour + b.hour;
        if (sec > 60)
        {
            m = sec / 60;
            sec = sec % 60;
            mi += m;
        }
        if (mi > 60)
        {
            h = mi / 60;
            mi %= 60;
            hr += h;
        }
        cout << "time after adding both objects = " << hr << " : " << mi << " : " << sec << endl;
    }
    ~Time()
    {

    }
};*/

int main()
{
    char choice;
    tollBooth obj;
    cout << "enter the choices for the car passed as follows:\n";
    cout << "\t 'p' or 'P' for car that paid toll tax \n";
    cout << "\t 'n' or 'N' for car that doesnot paid toll tax \n";
    cout << "\t press Esc to see number of cars crossed and total collection\n";
    do
    {
        choice = _getch();
        if (choice == 112 || choice == 80)
        {
            obj.payingcar(choice);
            cout << "car paid toll tax.\n";
        }
        if (choice == 110 || choice == 78)
        {
            obj.nonpaycar(choice);
            cout << "car doesnot paid toll tax.\n";
        }
        if (choice == 27)
        {
            obj.show();
            break;
        }
    } while (choice != 27);

    /*string d;
    int n;
    cout << "enter day : ";
    cin >> d;
    dayType obj(d);
    obj.setDay(d);
    obj.printDay();
    cout << "day = " << obj.returnDay() + "day" << endl;
    cout << "next day = " << obj.nextDay(d) << endl;
    cout << "previuos day = " << obj.prevDay() << endl;
    obj.calculate();*/

    /*int row, col;
    char player;
    ticTacToe game;
    cout << "current board:\n";
    game.printBoard();
    for (int i = 0; i < 9; i++)
    {
        if (i == 0 || i == 2 || i == 4 || i==6 || i==8)
        {
            player = 'O';
            cout << "palyer 1:\n" << "enter row & column:";
        here:
            cin >> row >> col;
            if (game.valid(row, col) && player == 'O')
            {
                game.move(row, col, player);
                if (game.winner(player))
                {
                    cout << "congratulations! you won.\n";
                    game.printBoard();
                    return 1;
                }
            }
            else
            {
                cout << "invalid move.retry:\n";
                goto here;
            }
        }
        else
        {
            player = 'X';
            cout << "player 2:\n" << "enter row & column:";
        there:
            cin >> row >> col;
            if (game.valid(row, col) && player == 'X')
            {
                game.move(row, col, player);
                if (game.winner(player))
                {
                    cout << "congratulations! you won.\n";
                    game.printBoard();
                    return 1;
                }
            }
            else
            {
                cout << "invalid move.retry!\n";
                goto there;
            }
        }
        cout << "board:\n";
        game.printBoard();
        Sleep(2000);
        system("cls");
    }
    if (game.gameOver())
    {
        cout << "game over \n";
        if (player == 'X')
        {
            if (game.winner(player)) 
            {
                cout << "winner is player 2!\n";
            }
        }
        else if (player == 'O')
        {
            if (game.winner(player))
            {
                cout << "winner is player 1!\n";
            }
        }
        else
        {
            cout << "it's a tie! nice game.\n";
        }
    }
    else
    {
        cout << "you missed any block\n";
    }*/

    /*float r, a, b;
    cout << "enter radius of circle: ";
    cin >> r;
    cout << "enter x cordinate of circle: ";
    cin >> a;
    cout << "enter y coordinate of circle: ";
    cin >> b;
    circle obj1;
    circle obj(r,a,b);
    obj.setvalues(r, a, b);
    obj.print();
    cout << "area of circle  = " << obj.area() << endl;
    cout << "circumference of circle = " << obj.circumference() << endl;*/
    
    /*int l, w;
    cout << "enter length: ";
    cin >> l;
    cout << "enter width: ";
    cin >> w;
    rectangle obj1;
    rectangle obj(l, w);
    obj.set(l, w);
    cout << "area of rectngle = " << obj.area();
    cout << "perimeter of recatngle = " << obj.perimeter();
    obj.get();
    cout << "the enter recatngle was:\n";
    obj.draw();*/

    /*romanType r1("MCXIV");
    romanType r2("CCCLIX");
    romanType r3("MDCLXVI");

    int choice;
    cout << "Enter 1 to print Roman numerals or 2 to print decimal numbers: ";
    cin >> choice;

    if (choice == 1) 
    {
        r1.printRomanNum();
        r2.printRomanNum();
        r3.printRomanNum();
    }
    else if (choice == 2) 
    {
        r1.printDecimalNum();
        r2.printDecimalNum();
        r3.printDecimalNum();
    }
    else 
    {
        cout << "Invalid choice." << endl;
    }*/

    /*bankAccount acc[10];
    for (int i = 0; i < 10; i++)
    {
        acc[i].setAtt();
        Sleep(7000);
        system("cls");
    }*/

    /*int h, m, s;
    cout << "enter hours:";
    cin >> h;
    cout << "enter minutes:";
    cin >> m; 
    cout << "enter seconds:";
    cin >> s;
    Time obj;
    obj.setHour(h);
    obj.setMin(m);
    obj.setSec(s);
    obj.setTime(h, m, s);
    obj.print();
    cout << "hours = " << obj.Hour() << endl;
    cout << "minutes = " << obj.minute() << endl;
    cout << "seconds = " << obj.second() << endl;
    obj.tick();
    Time obj2,obj3;
    obj2.setHour(h);
    obj2.setMin(m);
    obj2.setSec(s);
    obj2.setTime(h, m, s);
    obj2.print();
    cout << "hours = " << obj2.Hour() << endl;
    cout << "minutes = " << obj2.minute() << endl;
    cout << "seconds = " << obj2.second() << endl;
    obj2.tick();
    obj3.add(obj, obj2);*/
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solutioon Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
