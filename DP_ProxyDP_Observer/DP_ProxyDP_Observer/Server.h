/*
File: Server.h
Purpose: Definition of class Server. Server implements an Observer-pattern. 
Author: Eva Frisell <evmo1600>
Date: 2018-04-18
Version: 1.1
*/

#ifndef SERVER_H
#define SERVER_H

#include "Address.h"
#include "ClientConnection.h"
#include "ClientProxy.h"
#include "ChatObserver.h"
#include <vector>

class Subject {
public:
	virtual ~Subject() {}
	virtual void attach(ChatObserver*) = 0;
	virtual void detach(ChatObserver*) = 0;
};

class Server : public Subject {

	public:
		Server(){}
		virtual ~Server(){}

		virtual void attach(ChatObserver*);
		virtual void detach(ChatObserver*);
		virtual void notify(const Message &mess);
		virtual void addMessage(const Message &mess);

	protected:
		vector<ChatObserver*> chatobservers;							// A vector to keep track of the members in the chat

};
#endif
