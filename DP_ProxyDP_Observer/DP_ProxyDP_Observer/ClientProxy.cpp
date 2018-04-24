/*
File: ClientProxy.cpp
Purpose: Implementation of class ClientProxy. Clientproxy acts as a recipient of new messages. 
Author: Eva Frisell <evmo1600>
Date: 2018-04-18
Version: 1.1
*/

#include "ClientProxy.h"

// The server calls a clients update function and passes a message.The client receives the message and then passes it to
// the ClientConnection class.
void ClientProxy::update(const Message & mess)
{
	iClientCon->send(mess);
}
