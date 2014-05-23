/*
 * EventManager.h
 *
 *  Created on: 07.01.2013
 *      Author: nopper
 */

#ifndef EVENTMANAGER_H_
#define EVENTMANAGER_H_

#include "../../UsedLibs.h"

#include "../../layer0/concurrency/ThreadsafeQueue.h"
#include "../../layer0/stereotype/Singleton.h"

#include "Event.h"
#include "EventReceiver.h"

class EventManager : public Singleton<EventManager>
{

	friend class Singleton<EventManager>;

private:

	mutable boost::mutex eventMutex;

	ThreadsafeQueue<EventSP> allEvents;

	std::vector<EventReceiverSP> allEventReceivers;

	EventManager();
	virtual ~EventManager();

public:

	void processEvents();

	void addEventReceiver(const EventReceiverSP& receiver);

	void removeEventReceiver(const EventReceiverSP& receiver);

	//

	void sendEvent(const EventSP& event);

	const std::vector<EventReceiverSP>& getEventReceivers() const;

};

#endif /* EVENTMANAGER_H_ */
