//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef _SENDIMAGEANSWHANDLER_CORE_HH
#define _SENDIMAGEANSWHANDLER_CORE_HH
		
#include "aceSmartSoft.hh"

#include <CommHoleLocalizer/Holes.hh>
#include <CommHoleLocalizer/ImageDir.hh>

// include the input interfaces (if any)

// include all interaction-observer interfaces
#include <SendImageAnswHandlerObserverInterface.hh>

class SendImageAnswHandlerCore 
:	public Smart::IQueryServerHandler<CommHoleLocalizer::ImageDir, CommHoleLocalizer::Holes, SmartACE::QueryId>
,	public Smart::TaskTriggerSubject
{
private:

	virtual void updateAllCommObjects();

/**
 * Implementation of the Subject part of an InteractionObserver
 */
private:
	std::mutex interaction_observers_mutex;
	std::list<SendImageAnswHandlerObserverInterface*> interaction_observers;
protected:
	void notify_all_interaction_observers();
public:
	void attach_interaction_observer(SendImageAnswHandlerObserverInterface *observer);
	void detach_interaction_observer(SendImageAnswHandlerObserverInterface *observer);

protected:
	
public:
	SendImageAnswHandlerCore(Smart::IQueryServerPattern<CommHoleLocalizer::ImageDir, CommHoleLocalizer::Holes, SmartACE::QueryId>* server);
	virtual ~SendImageAnswHandlerCore();
	//virtual void handleQuery(const SmartACE::QueryId &id, const CommHoleLocalizer::ImageDir& request);
};
#endif
