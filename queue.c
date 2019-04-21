/*
 * File      : queue.c
 * This file is part of evening practice
 * Change Logs:
 * Date             Author         	Notes
 * 20190129         ray       create file
 */ 

#include "queue.h"

bool queue_init(struct Queue *q)
{
	return TRUE;
}
bool queue_push(struct Queue *q, u32 data)
{
	bool ret = TRUE;
	for (u32 i = 0; i < q->count; i++)
	{
		q->data[q->count - i] = q->data[q->count - 1 - i];
	}
	q->data[0] = data;
	if (q->count < QUEUE_MAX_LENGTH)
	{
		q->count++;
	}
	return ret;
}
bool queue_pop(struct Queue *q, u32 *data)
{
	bool ret = FALSE;
	if (q->count > 0)
	{
		*data = q->data[q->count - 1];
		q->count--;
		ret = TRUE;
	}

	return ret;
}
bool queue_peek(struct Queue *q, u32 *data)
{
	bool ret = FALSE;
	if (q->count > 0)
	{
		*data = q->data[q->count - 1];
		ret = TRUE;
	}

	return ret;
}
void queue_clear(struct Queue *q)
{
	q->count = 0;
}
