#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

unsigned int counter = 0;

extern "C"
{
	xQueueHandle messageQ;
}
Model::Model() : modelListener(0)
{
	messageQ = xQueueGenericCreate(1, 1, 0);
}

void Model::tick()
{
	if(xQueueReceive(messageQ, &counter, 0) == pdTRUE)
	{
		modelListener->setNewValue(counter);
	}
}
