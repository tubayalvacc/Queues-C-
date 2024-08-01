#include "iostream"

class Queue{

public:
    int queue[5], front, rear, x, result; //Global variables
    void EnQueue(); //Function declarations
    void DeQueue();
    void Display();
    Queue(){ //This is a constructor
        front = 0;
        rear = 0;
    }
};

void Queue::EnQueue() { //Getting Enqueue function from the Queue class
    if (rear >= 5){
        std::cout << "\n Queue overflow!\n";
    } else {
        std::cout << "\n Enter number to be inserted: ";
        std::cin >> x;
        rear++;
        queue[rear] = x;
        std::cout << "\n Number inserted in the Queue " << queue[rear];
    }
}

void Queue::DeQueue() {

    if(rear==0){
        std::cout << "\nQueue underflow!! \n";
    } else {
        if (front == rear){
            front = 0;
            rear = 0;
        } else {
            front++;
        }
    }
    result = queue[front];
}

void Queue::Display() {
    if (rear == 0){
        std::cout << "\n Queue underflow! \n";
    } else {
        std::cout << "\n Contents of Queue: ";
        for (int i = front + 1; i <= rear; i++){
            std::cout << queue[i] << "\t";
        }
    }
}

int main(){

    int choice;
    Queue queue;

    do{
        std::cout << "\n1: Insertion\n2: Deletion\n3: Display\n4: Exit\n ";
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                queue.EnQueue();
                break;
            case 2:
                queue.DeQueue();
                break;
            case 3:
                queue.Display();
                break;
            case 4:
                exit(0);
            default:
                std::cout << "\n Sorry! Your Choice is INCORRECT!! ";
        }
    } while (choice <= 4);
    getchar();

}