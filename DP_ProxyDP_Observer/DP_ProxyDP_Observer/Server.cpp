/*
File: Server.cpp
Purpose: Definition of class Server
Author: Eva Frisell <evmo1600>
Date: 2018-03-19
Version: 1.1
*/

#include "Server.h"

Server::Server(const Address & aServAddr)
{
	iClientCon = new HDclientConnection;
	iClientCon->connect(aServAddr);
}

Server::~Server()
{
	delete iClientCon;
}

void Server::attach(ChatObserver* aChatObserver)
{
	//iChatObserver = aChatObserver;
	//iClientCon->send(Message("__ATTACH__", iChatObserver->getName()));
}

void Server::detach(map<string, ClientProxy*>iClientMap)
{
	//iClientCon->send(Message("__DETACH__", iChatObserver->getName()));
}

/*
void Server::addMessage(const Message & mess)
{
	iClientCon->send(mess);
}
*/