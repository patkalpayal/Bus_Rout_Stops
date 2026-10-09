#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string stop;
    Node *prev;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void addStop(string name)
{
    Node *newNode = new Node;
    newNode->stop = name;
    newNode->prev = tail;
    newNode->next = NULL;

    if (head == NULL)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

    cout << "Stop added successfully.\n";
}

void removeStop(string name)
{
    Node *temp = head;

    while (temp != NULL && temp->stop != name)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Stop not found.\n";
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    else
        tail = temp->prev;

    delete temp;
    cout << "Stop removed successfully.\n";
}

void forwardRoute()
{
    Node *temp = head;

    if (temp == NULL)
    {
        cout << "Route is empty.\n";
        return;
    }

    cout << "Forward Route: ";

    while (temp != NULL)
    {
        cout << temp->stop;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }

    cout << endl;
}

void backwardRoute()
{
    Node *temp = tail;

    if (temp == NULL)
    {
        cout << "Route is empty.\n";
        return;
    }

    cout << "Return Journey: ";

    while (temp != NULL)
    {
        cout << temp->stop;
        if (temp->prev != NULL)
            cout << " -> ";
        temp = temp->prev;
    }

    cout << endl;
}

void findAdjacentStops(string name)
{
    Node *temp = head;

    while (temp != NULL && temp->stop != name)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Stop not found.\n";
        return;
    }

    if (temp->prev != NULL)
        cout << "Previous Stop: " << temp->prev->stop << endl;
    else
        cout << "This is the first stop.\n";

    if (temp->next != NULL)
        cout << "Next Stop: " << temp->next->stop << endl;
    else
        cout << "This is the last stop.\n";
}

int main()
{
    int choice;
    string name;

    do
    {
        cout << "\n--- Bus Route Management ---\n";
        cout << "1. Add Stop\n";
        cout << "2. Remove Stop\n";
        cout << "3. Display Forward Route\n";
        cout << "4. Display Return Journey\n";
        cout << "5. Find Previous and Next Stop\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter stop name: ";
                cin >> ws;
                getline(cin, name);
                addStop(name);
                break;

            case 2:
                cout << "Enter stop to remove: ";
                cin >> ws;
                getline(cin, name);
                removeStop(name);
                break;

            case 3:
                forwardRoute();
                break;

            case 4:
                backwardRoute();
                break;

            case 5:
                cout << "Enter current stop: ";
                cin >> ws;
                getline(cin, name);
                findAdjacentStops(name);
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
