#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::cin;
using std::cout;


int main()
{
    
}

//Написать функцию, которая удаляет из строки символ с заданным номером

void del(string& str, int n) {
    for (int count = n - 1; count < str.size(); count++) {
        str[count] = str[count + 1];
    }
}

int zadanie1() {
    int n;
    string str;

    cin >> str >> n;

    del(str, n);

    cout << str;

    return 0;
}
//. Написать функцию, которая удаляет из строки все вхождения в нее заданого символа.

void remove(char* arr, char c)
{
    const char* old = arr;
    while (*old)
    {
        if (*old != c) {
            *arr = *old;
            ++arr;
        }
        ++old;
    }
    *arr = '\0';
}
int zadanie2()
{
    setlocale(LC_ALL, "Rus");
    char s;
    char str(256);
    char* px;
    px = str;

    cout << "Введите текст \n";

    cin.getline(px, 256);

    cout << "Какой символ удалить : ";
    cin >> s;

    remove(px, s);

    cout << px;

    return 0;
   
    //Написатьфункцию, которая вставляет в строку в указанную позицию заданный символ.
  
    void zadanie3(string & s, char ch, size_t pos)
    {
        s += ch;
        for (size_t i = s.size() - 1; i >= pos; i--)
            s[i] = s[i - 1];
        s[pos - 1] = ch;
    }

    int main()
    {
        char ch;
        size_t pos, size;
        string s;
        cout << "Строка:\n";
        getline(cin, s);
        cout << "символl:\n";
        cin >> ch;

        size = s.size();
        do
        {
            cout << "Позиция:\n";
            cin >> pos;
            if (pos<1 || pos>size) cout << "1<=Позиция<=" << size << "  Ожидайте...\n";
        } while (pos<1 || pos>size);

        InsertSymbol(s, ch, pos);

        cout << s << "\n";

    
        return 0;
    }

    //. Написать программу, которая заменяет все символы точки «.» в строке, введенной пользователем, на символы восклицательного знака «!»
    void zadanie4()
    {
        char line[100];
        cout << "Введите размер.:";
        cin.getline(line, 100);

        for (int i = 0; i < 100; i++)
        {
            if (line[i] == '.') {
                line[i] = '!';
            }

        }

        cout << line << endl;
      
    }
    //Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке

    int zadanie5()
    {
        string line;
        int count = 0;
        char searchKey = 'a';
        cout << "Введите строку: ";
        getline(cin, line);
        for (unsigned int i = 0; i < line.length(); i++)
            if (line[i] == searchKey)
                count++;
        cout << "Строка" << count << " Символ " << """ << Встрчается << ""!" << endl;
        return 0;
    }

    //Zadanie 6 Пользователь вводит строку. Определить количество букв, количество цифр и количество остальных    символов, присутствующих в строке.
   

    //------------------------------------//буквы
    int strLenght(char* str) {
        int counter = 0;

        while (str[counter] != '\0') {
            counter++;
        }
        return counter;
    }
    //------------------------------------//цифры
    int strLenght1(char* str1) {
        int counter1 = 0;

        while (str1[counter1] != '\0') {
            counter1++;
        }
        return counter1;
    }
    //------------------------------------//символы
    int strLenht2(char* str2) {
        int counter2 = 0;

        while (str2[counter2] != '\0') {
            counter2++;
        }
        return counter2;
    }
    //------------------------------------//другое
    int strLenght3(char* str3) {
        int counter3 = 0;

        while (str3[counter3] != '\0') {
            counter3++;
        }
        return counter3;
    }


    int main(int argc, const char* argv[]) {

        setlocale(0, "");

        char* str = "Вроде бы все хорошо"; //буквы
        char* str1 = "12323536457456345345345"; //цифры
        char* str2 = "..,./,/,./,/.';'"; //символы
        char* str3 = "$#@!@#$%#^$&%*^&(*)*)*(_*(&^%^$%^"; //другое
        cout << "букв = " << strlen(str) << endl;
        cout << "цифр = " << strlen(str1) << endl;
        cout << "символов = " << strlen(str2) << endl;
        cout << "другое = " << strlen(str3) << endl;
    }