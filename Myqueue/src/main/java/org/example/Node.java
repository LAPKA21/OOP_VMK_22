package org.example;
//Класс узла стэка
//Автор Богушевич Данил ВМК-22

//Использую шаблонный тип
public class Node <T> {

    T data; //Данные в узле

    Node next; // Указатель на следуйщий элемент в списке

    Node previous; // Указатель на предыдущий элемент в списке

    //Констурктор без параметров указателей на элементы списка
    Node(T n_data) {

        this.data = n_data;
        this.next = null;
        this.previous = null;

    }

    //Конструктор с параметрами которые указывают на следуйщий и предыдущий элемент
    Node(T n_data, Node nextn, Node prevn) {

        this.data = n_data;
        this.next = nextn;
        this.previous = prevn;
    }

    //Получение данных из списка
    T getData(){
        return this.data;
    }

    //Установка данных в узле
    void setData(T n_data){
        this.data = n_data;
    }
}