//
// Created by Ramon Jaspers on 3/12/2018.
//

#ifndef PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP
#define PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP

#endif //PPC_WEEK_4_RAMONJASPERS_OPDRACHT9_QUEUE_HPP

#include <vector>
#include <assert.h>
using namespace std;

struct Queue {
    vector<float> v;
    int head;
//    float data;
    int tail;
};

void init_queue(Queue &pq);

void enqueue(Queue &pq, float data);

float dequeue(Queue &pq);

float show(const Queue &pq);
