/*
File: Server.h
Purpose: Definition of class Server
Author: Eva Frisell <evmo1600>
Date: 2018-03-19
Version: 1.1
*/

#ifndef SERVER_H
#define SERVER_H



#include "Address.h"
#include "ClientConnection.h"
#include "ClientProxy.h"
#include "ChatObserver.h"
#include <map>

class Subject {

public:
	virtual ~Subject() { }
	virtual void attach(ChatObserver*) = 0;
	virtual void detach(map<string, ClientProxy*>) = 0;
};

class Server : public Subject {

	public:
		Server(){}
		Server(const Address &aServAddr);
		virtual ~Server();

		virtual void attach(ChatObserver*);
		virtual void detach(map<string, ClientProxy*>iClientMap);
		//virtual void sendMessage(const Message &mess); // getMessage istead?
		//virtual void addMessage(const Message &mess);

private:
	HDclientConnection *iClientCon;
	ChatObserver *iChatObserver;
};
#endif
