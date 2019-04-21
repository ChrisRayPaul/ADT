/*
 * File      : queue.h
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190129         ray       create file
 */ 

#ifndef UTILS_QUEUE_H_
#define UTILS_QUEUE_H_


#include "public.h"

#define QUEUE_MAX_LENGTH (100)
struct Queue
{
	u32 count;
	u32 data[QUEUE_MAX_LENGTH];
};
bool queue_init(struct Queue *q);
bool queue_push(struct Queue *q, u32 data);
bool queue_pop(struct Queue *q, u32 *data);
bool queue_peek(struct Queue *q, u32 *data);
void queue_clear(struct Queue *q);
#endif /* UTILS_QUEUE_H_ */
