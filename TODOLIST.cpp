#include <iostream>
#include <vector>
using namespace std;
struct Task 
{
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask(const string& description) {
    Task task;
    task.description = description;
    task.completed = false;
    tasks.push_back(task);
    cout << "TASK ADDED SUCCESSFULLY" << endl;
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "NO TASK FOUND" << endl;
        return;
    }

    cout << "TASKS" << endl;
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". ";
        cout << (tasks[i].completed ? "[X] " : "[ ] ");
        cout << tasks[i].description << endl;
    }
}

void markTaskAsCompleted(int taskIndex) {
    if (taskIndex < 1 || taskIndex > tasks.size()) {
        cout << "INVALID TASK INDEX" << endl;
        return;
    }

    tasks[taskIndex - 1].completed = true;
    cout << "TASK MARK AS COMPLETED" << endl;
}

void removeTask(int taskIndex) {
    if (taskIndex < 1 || taskIndex > tasks.size()) {
        cout << "INVALID TASK INDEX" << endl;
        return;
    }

    tasks.erase(tasks.begin() + taskIndex - 1);
    cout << "TASK REMOVED SUCCESSFULLY" << endl;
}

int main() {
    int choice;
    string description;
    int taskIndex;

    cout << "WELCOME TO THE TO-DO LIST TASK MANAGER" << endl;

    while (true) {
        cout << endl;
        cout << "MENU:" << endl;
        cout << "1. ADD TASK" << endl;
        cout << "2. VIEW TASKS" << endl;
        cout << "3. MARK TASK AS COMPLETED" << endl;
        cout << "4. REMOVE TASK" << endl;
        cout << "5. EXIT" << endl;
        cout << "ENTER YOUR CHOICE ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "ENTER TASK DESCRIPTION ";
                cin.ignore();
                getline(cin, description);
                addTask(description);
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                cout << "ENTER THE TASK INDEX ";
                cin >> taskIndex;
                markTaskAsCompleted(taskIndex);
                break;
            case 4:
                cout << "ENTER THE TASK INDEX ";
                cin >> taskIndex;
                removeTask(taskIndex);
                break;
            case 5:
                cout << "THANK YOU! FOR USING TO DO LIST MANAGER" << endl;
                return 0;
            default:
                cout << "INVALID CHOICE TRY AGAIN" << endl;
        }
    }

    return 0;
}
