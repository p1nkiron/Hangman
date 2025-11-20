#include <iostream>
using namespace std;
int main() {
    //менюшка
    int x;
    cout<<"Добрый день!"<<endl;
    cout<<"Я игра 'Виселица' на английском"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|   Играть   |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"------------------"<<endl;
    cout<<"|  Правила игры   |"<<endl;
    cout<<"------------------"<<endl;
    cout<<"------------"<<endl;
    cout<<"|   Выход   |"<<endl;
    cout<<"------------"<<endl;
    cout<<"Выберете нужное действие:";
    cin>>x;

    //вывод виселицы при ошибках (в отдельный модуль тип void drawHangman(int triesLeft) )
    int stage = 6 - triesLeft;
    cout << " _______\n";
    cout << " |     |\n";
    cout << " |     " << (stage > 0 ? "O" : " ") << "\n";
    cout << " |    "  << (stage > 2 ? "/" : " ")
                     << (stage > 1 ? "|" : " ")
                     << (stage > 3 ? "\\" : " ") << "\n";
    cout << " |    "  << (stage > 4 ? "/" : " ")
                     << " "
                     << (stage > 5 ? "\\" : " ") << "\n";
    cout << " |\n";
    cout << "_|_\n\n";


    //при проигрыше (тип void draw(int tries) )
    cout << " _______\n";
    cout << " |     |\n";
    cout << " |     0"<<"\n";
    cout << " |    /|\\ "<<"\n";
    cout << " |    / \\ " <<"\n";
    cout << " |\n";
    cout << "_|_\n\n";
}