//
// Created by Ramon Jaspers on 3/12/2018.
//

#ifndef PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP
#define PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP

#include <vector>
#include <assert.h>
#include "queue.hpp"

using namespace std;

void init_queue(Queue &pq) {
    pq.v = {};
    pq.head = 0;
    pq.tail = -1;
}

void enqueue(Queue &pq, float data) {
    pq.v.push_back(data);
    pq.tail++;
}

float dequeue(Queue &pq) {
    assert(pq.head <= pq.tail);

    float tmp = pq.v[pq.head];
    pq.v.erase(pq.v.begin());
    pq.tail--;
    return tmp;
}

float show(const Queue &pq) {
    return pq.v[pq.head];
}

#endif //PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP
