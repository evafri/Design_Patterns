/*
File: ClientProxy.h
Purpose: Definition of class ClientProxy. ClientProxy communicates with the server and receives new messages. 
Author: Eva Frisell <evmo1600>
Date: 2018-04-18
Version: 1.1
*/

#ifndef CLIENTPROXY_H
#define CLIENTPROXY_H

#include "ChatObserver.h"
#include "ClientConnection.h"
#include "Address.h"

class Server;  // Forward declaration

class ClientProxy : public ChatObserver {
private:
	HDclientConnection* iClientCon;

public:
	ClientProxy(string iname, HDaddress address) :ChatObserver(iname) {
		iClientCon = new HDclientConnection;
		iClientCon->connect(address);					// Connects with ClientConnection and add HDaddress
	}

	virtual ~ClientProxy() {
		delete iClientCon;
	}

	virtual void update(const Message &mess);
};
#endif