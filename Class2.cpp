
#include <iostream>
#include <string>
class Counter {
private:
    int value;
public:
    Counter(int v1):
        value(v1)
    {
    }
    void add() {
        value = value + 1;
    }
    void diff() {
        value = value - 1;
    }
    int equality() {
        return value;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int v1 = 1;
    std::string answer;
    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
        std::cin >> answer;
        if (answer == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> v1;
            break;
        }
        if (answer == "нет") {
            std::cout << "Начальное значение счетчика задается по умолчанию" << std::endl;
            break;
        }
        std::cout << "Ошибка в ответе, попробуйте еще раз" << std::endl;
    } while (1);
    Counter electronics1(v1);
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> answer;
        if (answer == "+") {
            electronics1.add();
        }
        else if (answer == "-") {
            electronics1.diff();
        }
        else if (answer == "=") {
            std::cout << electronics1.equality() << std::endl;
        } 
        else if (answer == "х") {
            std::cout << "До свидания!" << std::endl;
        }
        else {
            std::cout << "Разрешено вводить только определенные команды" << std::endl;
        }
    } while (!(answer == "х")); // в данном случае я использую русскую букву "х"
    return 0;
};
