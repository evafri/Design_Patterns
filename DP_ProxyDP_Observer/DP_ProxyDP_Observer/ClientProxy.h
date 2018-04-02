/*
File: ClientProxy.h
Purpose: Definition of class ClientProxy
Author: Eva Frisell <evmo1600>
Date: 2018-03-18
Version: 1.1
*/

#ifndef CLIENTPROXY_H
#define CLIENTPROXY_H

#include "ChatObserver.h"
#include "Address.h"
#include "Server.h"

class Server;  // Forward declaration

class ClientProxy : public ChatObserver {
private:
	string name;
	HDaddress addr;
	//Server *iServ;

public:
	ClientProxy(string iname, HDaddress address) :ChatObserver("ClientProxy"), name(iname), addr(address)
	{		
		//iServ->attach(this);
	}

	virtual ~ClientProxy() {}

	virtual void update(const Message &mess);
	//void addMessage(Message message); 
	//void leave(); 
};
#endif