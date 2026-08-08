class MyCircularDeque {
public:
    vector<int> q;
    int front;
    int rear;
    int size;
    int capacity;

    MyCircularDeque(int k) {
        q.resize(k);
        capacity = k;
        front = 0;
        rear = -1;
        size = 0;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        front = (front - 1 + capacity) % capacity;
        q[front] = value;

        if (size == 0) {
            rear = front;
        }

        size++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        rear = (rear + 1) % capacity;
        q[rear] = value;

        if (size == 0) {
            front = rear;
        }

        size++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        front = (front + 1) % capacity;
        size--;

        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        rear = (rear - 1 + capacity) % capacity;
        size--;

        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }

        return q[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }

        return q[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};