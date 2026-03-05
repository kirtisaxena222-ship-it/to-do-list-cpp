#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void addTask() {
    ofstream file("tasks.txt", ios::app);
    string task;

    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);

    file << task << endl;
    file.close();

    cout << "Task added!\n";
}

void viewTasks() {
    ifstream file("tasks.txt");
    string task;
    int i = 1;

    while (getline(file, task)) {
        cout << i++ << ". " << task << endl;
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
        }

    } while(choice != 3);

    return 0;
}
