#include "SockClass.h"
#include <queue>
#include <vector>
#include <algorithm>

#define PORT 80
#define MYIP "192.168.35.149"
#define ARRAYSIZE 5

extern ServerSock serverSock;
extern ClientSock clientSock;
extern char sendBuffer[BUFSIZ];
extern char recieveBuffer[BUFSIZ];
extern std::mutex socketQueueMutex;

extern int arrayIndex;
extern ClientSock array[ARRAYSIZE];
extern std::thread threadArray[ARRAYSIZE];
//extern std::vector<std::thread> array;

void MainFunction();
void SendDataFunction();
int ReadData();

void Input(int myAccessPoint);

int SendMessage(ClientSock clientSock);
int CommandReader();
