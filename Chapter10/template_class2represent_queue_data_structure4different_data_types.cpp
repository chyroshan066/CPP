#include<iostream>

using namespace std;

const int MAX = 20;

template <class T>
class Queue{
    private:
        T arr[MAX];
        int rear;
    public:
        Queue();
        void add(T data);
        T remove();
        int size();
};

template <class T>
Queue<T>:: Queue(){
    rear = 0;
}

template <class T>
void Queue<T>:: add(T data){
    if(rear >= MAX)
        cout<< "Queue is full"<< endl;
    else    
        arr[rear++] = data;
}

template <class T>
T Queue<T>:: remove(){
    T front;
    if(rear == 0)
        cout<< "Queue is empty";
    else{
        front = arr[0];
        rear--;
        for(int i=0; i<rear; i++)
            arr[i] = arr[i+1];
    }
    return front;
}

template <class T>
int Queue<T>:: size(){
    return rear;
}

int main()
{
    cout<< "Queue for integer"<< endl;
    Queue<int> q1;
    q1.add(11);
    q1.add(22);
    q1.add(33);
    cout<< "Size of queue before removal is: "<< q1.size()<< endl;
    cout<< "Item removed from queue: "<< q1.remove()<< endl;
    cout<< "Size of queue after one removal is: "<< q1.size()<< endl;

    cout<< endl<< "Queue for floating point number"<< endl;
    Queue<float> q2;
    // q2.add(1.1);
    // q2.add(2.2);
    cout<< "Size of queue before removal is: "<< q2.size()<< endl;
    cout<< "Item removed from queue: "<< q2.remove()<< endl;
    cout<< "Size of queue after one removal is: "<< q2.size()<< endl;

    cout<< endl<< "Queue for characters"<< endl;
    Queue<char> q3;
    q3.add('A');
    q3.add('B');
    q3.add('C');
    q3.add('D');
    cout<< "Size of queue before removal is: "<< q3.size()<< endl;
    cout<< "Item removed from queue: "<< q3.remove()<< endl;
    cout<< "Item removed from queue: "<< q3.remove()<< endl;
    cout<< "Size of queue after two removal is: "<< q3.size()<< endl;

    return 0;
}