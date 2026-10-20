#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> printQueue;
    int choice;
    string jobName;

    do {
        cout << "\n--- PRINTER SPOOLER QUEUE SYSTEM ---\n";
        cout << "1. Add Print Job (Enqueue)\n";
        cout << "2. Process Next Job (Dequeue)\n";
        cout << "3. View Next Job in Line\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter document name: ";
                cin >> ws; // clear input buffer
                getline(cin, jobName);
                printQueue.push(jobName);
                cout << "Job \"" << jobName << "\" added to the queue.\n";
                break;
            case 2:
                if (!printQueue.empty()) {
                    cout << "Printing and removing: \"" << printQueue.front() << "\"\n";
                    printQueue.pop();
                } else {
                    cout << "Queue is empty! No jobs to print.\n";
                }
                break;
            case 3:
                if (!printQueue.empty()) {
                    cout << "Next job in line: \"" << printQueue.front() << "\"\n";
                } else {
                    cout << "Queue is empty!\n";
                }
                break;
            case 4:
                cout << "Exiting system.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
