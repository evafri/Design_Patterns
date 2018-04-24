/*
File: Server.cpp
Purpose: Implementation of class Server. 
Author: Eva Frisell <evmo1600>
Date: 2018-04-18
Version: 1.1
*/

#include "Server.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// Function that adds a client to the vector of clients. Notify is triggered and a message who has joined the chat is sent.
void Server::attach(ChatObserver* aChatObserver) {
	chatobservers.push_back(aChatObserver);
	notify(Message("Server=> " + aChatObserver->getName(), " has joined the chat"));
}

// Function that removes a client from the vector of clients. Notify is triggered and a message who has left the chat is sent.
void Server::detach(ChatObserver* clp){

	chatobservers.erase (remove(chatobservers.begin(),chatobservers.end(),clp), chatobservers.end());
	notify(Message("Server=> " + clp->getName(), " has left the chat"));
}

// Notify function that iterates through the vector of clients. A message is passed to the clients update()-function.
void Server::notify(const Message &mess){

	for (int i = 0; i < chatobservers.size(); i++) {
		chatobservers[i]->update(mess);
	}
}

// Function that adds an ordinary chat message.
void Server::addMessage(const Message &mess)
{
	notify(mess);
}
