package org.example;
/**Класс очереди */

public class Myqueue<T> {

    Node head; //Указатель на вершину стэка

    Node end; //Указатель на конец стэка

    int size; //Размер стэка

    /**
     * Конструктор без параметров
     */
    Myqueue() {
        Node curr = new Node(null);
        this.head = null;
        this.end = null;
        size = 1;
    }

    /**
     * Конструктор с параметрами данных n_data
     */
    Myqueue(T n_data) {
        Node curr = new Node<>(n_data);
        head = curr;
        end = curr;
        size = 1;
    }

    /**
     * Помещение элемента в конец очереди с данными n_data
     */
    void enqueue(T n_data) {
        if(end == null){
            Node curr = new Node<>(n_data);
            end = curr;
            head = curr;
        }
            Node curr = new Node<>(n_data);
            end.next = curr;
            curr.previous = end;
            end = curr;
            size++;
    }

    /**
     * Получение элемента из вершины стэка
     */
    T dequeue() {
        if (emptystack() == false) {
            return null;
        }
        T v_data = (T) head.data;
        head = head.next;
        head.previous = null;
        return v_data;
    }

    /**
     * Проверка на  пустую очередь
     */
    boolean emptystack() {
        if (end.data == null) {
            return false;
        }
        return true;
    }

    /**
     * Просмотр значения в конце очереди
     */
    T peek() {
        return (T) end.data;
    }

    /**
     * Полная очистка очереди
     */
    void clear() {
        head.next = null;
        head.data = null;
        end = head;
        size = 0;
    }

    /**Просмотр значения находящегося в начале очереди */
    T front() {
        return (T) head.data;
    }


    /**
     * Получение размера очереди
     */
    int QueueSize() {
        return size;
    }

    /**
     * Рассчет кол-ва элементов в очереди
     */
    int QueueSizecalc() {
        int count = 0;
        Node curr = head;
        while (curr.next != null) {
            curr = curr.next;
            count++;
        }
        return count;
    }

}



