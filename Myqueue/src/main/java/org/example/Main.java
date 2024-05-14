/**Автор Богушевич Данил ВМК-22 */
package org.example;

public class Main {
    public static void main(String[] args) {

        Myqueue <Integer> l1 = new Myqueue<>();


       // l1.enqueue(10);
        l1.enqueue(11);
        l1.enqueue(12);
        l1.enqueue(13);
        l1.enqueue(14);
        l1.enqueue(15);
        l1.enqueue(16);

        System.out.println( l1.size);
        for(int i = 1; i < 7; i++) {
            System.out.println(i + ")" + l1.dequeue());
        }
    }
}