//программа для подсчета посещений
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {

    int nVisitorLibr = 0;
    int nVisitorTook = 0;    
    int nAllVisitorTook = 0;    
    int nAllBook = 0;
    int nAllJournal = 0;
    int nAllArtBook = 0;
    int nArtBook = 0;
    int nIndustryBook = 0;
    int nAllIndustryBook = 0;
    int nJournal_book = 0;
    cout << "Сколько сегодня пришло пользователей в библиотеку?" << endl;
    cin >> nVisitorLibr;
    
    for (int i_course = 1; i_course <= nVisitorLibr; i_course++) {
        cout << "++++++++++++++++++++++++++++++++++" << endl;
        cout << "Сколько всего литературы взял № " << i_course << "?" << endl;
        cin >> nVisitorTook;
        cout << "Сколько он взял журналов?" << endl;
        cin >> nJournal_book;
        if (nJournal_book >= 0){
            cout << "Книг " << nVisitorTook - nJournal_book << endl;
        }
        nAllBook += (nVisitorTook - nJournal_book); //все книги за сегодня
        nAllVisitorTook += nVisitorTook; // счетчик для подчета журналов
        cout << "Сколько он взял художественной литературы?" << endl;
        cin >> nArtBook;
        nAllArtBook += nArtBook;// счетчик для подчета художественной литературы
        cout << "Сколько он взял отраслевой литературы?" << endl;
        cin >> nIndustryBook;
        nAllIndustryBook += nIndustryBook;// счетчик для подчета отраслевой литературы
    }
        nAllJournal += (nAllVisitorTook - nAllBook);  
    cout << "================================" << endl << endl;
    cout << "Всего литратуры за сегодня: " << nAllBook << endl;
    cout << "Всего журналов за сегодня: " << nAllJournal << endl;
    cout << "Всего художественной литературы за сегодня: " << nAllArtBook << endl;
    cout << "Всего отраслевой литературы за сегодня: " << nAllIndustryBook << endl;
    
    return 0;
}

