package org.example;

import org.junit.Assert;

import java.util.Optional;

import static org.junit.jupiter.api.Assertions.*;

class MyqueueTest {

    @org.junit.jupiter.api.Test
    void enqueue() {
        Myqueue <Integer> l1 = new Myqueue<>();
        Myqueue <Integer> l2 = new Myqueue<>(0);
        Myqueue <Double> l3 = new Myqueue<>(1.0);

        l1.enqueue(10);
        l1.enqueue(11);
        l1.enqueue(12);
        l1.enqueue(13);
        l1.enqueue(14);
        l1.enqueue(15);
        l1.enqueue(16);

        l2.enqueue(101);
        l2.enqueue(111);
        l2.enqueue(121);
        l2.enqueue(131);
        l2.enqueue(141);
        l2.enqueue(151);
        l2.enqueue(161);

        l3.enqueue(2.0);
        l3.enqueue(3.0);
        l3.enqueue(4.0);
        l3.enqueue(5.0);
        l3.enqueue(6.0);
        l3.enqueue(7.0);
        l3.enqueue(8.0);

        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(10));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(11));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(12));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(13));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(14));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(15));
        Assert.assertEquals(Optional.ofNullable(l1.dequeue()),Optional.of(16));

        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(0));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(101));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(111));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(121));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(131));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(141));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(151));
        Assert.assertEquals(Optional.ofNullable(l2.dequeue()),Optional.of(161));

        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(1.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(2.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(3.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(4.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(5.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(6.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(7.0));
        Assert.assertEquals(Optional.ofNullable(l3.dequeue()),Optional.of(8.0));



    }

    @org.junit.jupiter.api.Test
    void dequeue() {
    }
}