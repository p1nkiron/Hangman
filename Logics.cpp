#include <iostream>
using namespace std;

int main() {
    //сама игра тип void game(int tries,string guess,string word, string input)
    //сделать заголовочный файл и main-овский, это добавить в модуль
    // void game(int tries,string guess,string word, string input) {
    //     while (tries > 0 && guess != word) {
    //         drawHangman(tries);
    //         cout << "Слово: ";
    //         for (char c : guess) cout << c << ' ';
    //         cout << "\nОсталось попыток: " << tries << "\n";
    //         cout << "Введите букву или слово: ";
    //         cin >> input;
    //
    //         if (input.size() == 1) {
    //             char letter = tolower(input[0]);
    //             bool found = false;
    //             for (int i = 0; i < word.size(); ++i) {
    //                 if (tolower(word[i]) == letter) {
    //                     guess[i] = word[i];
    //                     found = true;
    //                 }
    //             }
    //             if (found)
    //                 cout << "Хорошая работа!\n";
    //             else {
    //                 cout << "Этой буквы нет.\n";
    //                 tries--;
    //             }
    //         } else {
    //             if (input == word) {
    //                 guess = word;
    //                 break;
    //             } else {
    //                 cout << "Неправильное слово!\n";
    //                 tries--;
    //             }
    //         }
    //     }
    //     if (guess == word) {
    //         cout << "\nТы выиграл! Слово было: " << word << "\n";
    //         cout << " /\\_/\\\n";
    //         cout << "( o.o )\n";
    //         cout << " > ^ <\n";
    //     }
    //     else{
    //         cout << "\nТы проиграл. Слово было: " << word << "\n";
    //         draw(tries);
    //     }
    // }

    //работа менюшки main-овский файл
    // switch (x) {
    //     case(1): {
    //         int z;
    //         cout<<"Выберете категорию"<<endl;
    //         cout<<"1)Животные"<<endl;
    //         cout<<"2)Еда"<<endl;
    //         cout<<"3)Растения"<<endl;
    //         cin>>z;
    //         switch (z) {
    //             cout << "=== Виселица ===\n";
    //             cout << "Вы можете ввести одну букву или целое слово.!\n\n";
    //             case(1): {
    //                 string words[] = {"cat", "dog", "monkey", "lion", "deer"};
    //                 srand(time(0));
    //                 string word = words[rand() % 5];
    //                 string guess(word.size(), '_');
    //                 int tries = 6;
    //                 string input;
    //                 game(tries,guess,word,input);
    //                 break;
    //             }
    //             case(2): {
    //                 string words[] = {"cake", "icecream", "pizza", "pasta", "juice"};
    //                 srand(time(0));
    //                 string word = words[rand() % 5];
    //                 string guess(word.size(), '_');
    //                 int tries = 6;
    //                 string input;
    //                 game(tries,guess,word,input);
    //                 break;
    //             }
    //             case(3): {
    //                 string words[] = {"flower", "grass", "rose", "sunflower", "mint"};
    //                 srand(time(0));
    //                 string word = words[rand() % 5];
    //                 string guess(word.size(), '_');
    //                 int tries = 6;
    //                 string input;
    //                 game(tries,guess,word,input);
    //                 break;
    //             }
    //
    //         }
    //         break;
    //     }
    //     case(2): {
    //         cout<<"Программа загадывает слово из выбранной категории."<<endl;
    //         cout<<"Пользователь вводит букву или слово целиком."<<endl;
    //         cout<<"Если слово отгадано, то игра завершается."<<endl;
    //         break;
    //     }
    //     case(3): {
    //         break;
    //     }
    // }
}
