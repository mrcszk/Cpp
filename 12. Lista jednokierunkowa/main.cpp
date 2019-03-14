#include <iostream>
using namespace std;

typedef struct ListElement
{
    int liczba;
    struct ListElement*next;
}ListElement;

typedef struct List
{
    ListElement*head;
    ListElement*tail;
}List;

/* inicjalizacja listy */
void init(List*list)
{
    list->head = nullptr;
    list->tail = nullptr;
}

/* Dodawanie danych do listy z przodu*/
void add_front(List*list, int liczba)
{
    ListElement*tmp =  new ListElement;
    tmp->next = list->head;
    tmp->liczba = liczba;
    if (list->head != nullptr)
    {
        list->head = tmp;
    } else
    {
        list->head = list->tail = tmp;
    }
}
/* Dodawanie danych do listy z tyłu*/
void add_back(List*list, int liczba)
{
    ListElement*tmp = new ListElement;
    tmp->next = nullptr;
    tmp->liczba = liczba;
    if (list->tail != nullptr) {
        list->tail->next = tmp;
        list->tail = tmp;
    }
    else {
        list->head = list->tail = tmp;
    }
}

/* Usuwanie pierwszego elementu */
void delete_front(List*list) {
    ListElement*tmp;
    if (list->head == nullptr)
        return;
    tmp = list->head;
    list->head = list->head->next;
    if (list->head == nullptr)
        list->tail = nullptr;
    delete tmp;
}

/* Usuwanie ostatniego elementu */
void delete_back(List*list) {
    ListElement*tmp= list->head;
    while (tmp->next->next != nullptr) {
        tmp = tmp->next;
    }

    list->tail = tmp;
    tmp->next = nullptr;
    if (list->head == nullptr)list->tail = nullptr;
    delete list->tail->next;
}

int amount(List*list) {
    int i = 0;
    ListElement*tmp = list->head;
    while (tmp!= nullptr) {
        tmp = tmp->next;
        i++;
    }
    return i;
}

/* Zwalnianie całej listy */
void deleteList(List*list)
{
    while (list->head) {
        delete_front(list);
    }
}

/* Wypisanie zawartości listy*/
void printList(List*list)
{
    ListElement*tmp;
    for (tmp = list->head; tmp != nullptr; tmp = tmp->next) {
        cout << tmp->liczba << " ";
    }
}
int main()
{

    List list;
    init(&list);
    int i;

    add_back(&list, 2);
    add_back(&list, 3);
    add_back(&list, 4);
    add_back(&list, 5);
    i = amount(&list);
    cout << "Ilosc "<< i << endl;
    printList(&list);
    cout << endl;


    delete_back(&list);
    i = amount(&list);
    cout << "Ilosc "<< i << endl;
    printList(&list);
    cout << endl;


    delete_front(&list);
    i = amount(&list);
    cout << "Ilosc "<< i << endl;
    printList(&list);
    cout << endl;


    add_front(&list, 1);
    i = amount(&list);
    cout << "Ilosc "<< i << endl;
    printList(&list);
    cout << endl;


    deleteList(&list);
    i = amount(&list);
    cout << "Ilosc "<< i << endl;
    printList(&list);


    return 0;
}